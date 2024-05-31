#include "MaterialPoint.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"

void AMaterialPoint::MotionEquation()
{
	//���������� ������� ����� �������� �������
	this->SetActorLocation(FVector(
		-4 * Time * Time + 1,
		8 - 3 * Time,
		2 * Time));
}

AMaterialPoint::AMaterialPoint()
{
	PrimaryActorTick.bCanEverTick = true;
	SphereMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Point"));

	VelocityVector = CreateDefaultSubobject<UArrowComponent>(TEXT("VelocityVector"));
	AccelerationVector = CreateDefaultSubobject<UArrowComponent>(TEXT("AccelerationVector"));

	VelocityVector->ArrowSize = 1;
	AccelerationVector->ArrowSize = 1;

	VelocityVector->SetupAttachment(SphereMesh);
	AccelerationVector->SetupAttachment(SphereMesh);

	VelocityVector->bHiddenInGame = 0;
	AccelerationVector->bHiddenInGame = 0;

	Time = .0f;
	TimeDilationFactor = 1;
}

void AMaterialPoint::BeginPlay()
{
	Super::BeginPlay();
	//���������� ������� ��������
	RadiusOfCurvature = FMath::Pow((64 * 0.5 * 0.5), 3 / 2) / 24;
	TangentialAcceleration = FVector::DotProduct(Acceleration, Velocity.GetSafeNormal()) * Velocity.GetSafeNormal();
	NormalAcceleration = Acceleration - TangentialAcceleration;
}

void AMaterialPoint::Tick(float DeltaTime)//�������, ������������ ������ ����
{
	if (Time <= 0.5) {
		Super::Tick(DeltaTime);
		if (Time > 0) { //��������� ����������
			PreviousLocation = GetActorLocation();
			DrawDebugLine(GetWorld(), PreviousLocation, GetActorLocation(), FColor::Red, false, 100, 0, 0.03f);
		}
		Time += DeltaTime / TimeDilationFactor;
		//����������� ����� � ������ �������
		MotionEquation();
		//���������� ��������
		Velocity = FVector(-8 * Time, -3, 2);
		//���������� ���������
		Acceleration = FVector(-8, 0, 0);

		//��������� ������� ��������
		VelocityVector->SetArrowLength(10 * Velocity.Length());
		VelocityVector->SetWorldRotation(Velocity.Rotation());

		//��������� ������� ���������
		AccelerationVector->SetArrowLength(10 * Acceleration.Length());
		AccelerationVector->SetWorldRotation(Acceleration.Rotation());

		//���������� ������������ � ����������� ���������
		TangentialAcceleration = FVector::DotProduct(Acceleration, Velocity.GetSafeNormal()) * Velocity.GetSafeNormal();
		NormalAcceleration = Acceleration - TangentialAcceleration;
	}
}



