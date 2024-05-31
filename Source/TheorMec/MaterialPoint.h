#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MaterialPoint.generated.h"

class UArrowComponent;

UCLASS()
class THEORMEC_API AMaterialPoint : public AActor
{
	GENERATED_BODY()

	void MotionEquation();
public:	
	AMaterialPoint();

	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* SphereMesh;
	UPROPERTY(VisibleAnywhere)
	UArrowComponent* VelocityVector;
	UPROPERTY(VisibleAnywhere)
	UArrowComponent* AccelerationVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float TimeDilationFactor;
	UPROPERTY(BlueprintReadWrite)
	float Time;
	UPROPERTY(BlueprintReadWrite)
	FVector TangentialAcceleration;
	UPROPERTY(BlueprintReadWrite)
	FVector NormalAcceleration;
	UPROPERTY(BlueprintReadWrite)
	float RadiusOfCurvature;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

private:
	
	FVector Velocity;
	FVector Acceleration;
	FVector PreviousLocation;
};
