#include "MaterialPoint.h"
#include "Components/StaticMeshComponent.h"
#include "DrawDebugHelpers.h"
#include "Components/ArrowComponent.h"

void AMaterialPoint::MotionEquation()
{
	//Вычисление позиции точки согласно времени
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
	//Вычисление радиуса кривизны
	RadiusOfCurvature = FMath::Pow((64 * 0.5 * 0.5), 3 / 2) / 24;
	TangentialAcceleration = FVector::DotProduct(Acceleration, Velocity.GetSafeNormal()) * Velocity.GetSafeNormal();
	NormalAcceleration = Acceleration - TangentialAcceleration;
}

void AMaterialPoint::Tick(float DeltaTime)//Функция, вызывающаяся каждый кадр
{
	if (Time <= 0.5) {
		Super::Tick(DeltaTime);
		if (Time > 0) { //Отрисовка траектории
			PreviousLocation = GetActorLocation();
			DrawDebugLine(GetWorld(), PreviousLocation, GetActorLocation(), FColor::Red, false, 100, 0, 0.03f);
		}
		Time += DeltaTime / TimeDilationFactor;
		//Перемещение точки в момент времени
		MotionEquation();
		//Вычисление скорости
		Velocity = FVector(-8 * Time, -3, 2);
		//Вычисление ускорения
		Acceleration = FVector(-8, 0, 0);

		//Отрисовка вектора скорости
		VelocityVector->SetArrowLength(10 * Velocity.Length());
		VelocityVector->SetWorldRotation(Velocity.Rotation());

		//Отрисовка вектора ускорения
		AccelerationVector->SetArrowLength(10 * Acceleration.Length());
		AccelerationVector->SetWorldRotation(Acceleration.Rotation());

		//Вычисление касательного и нормального ускорения
		TangentialAcceleration = FVector::DotProduct(Acceleration, Velocity.GetSafeNormal()) * Velocity.GetSafeNormal();
		NormalAcceleration = Acceleration - TangentialAcceleration;
	}
}



