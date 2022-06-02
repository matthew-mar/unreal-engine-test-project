#pragma once

#include "GameFramework/Actor.h"
#include "MedKit.generated.h"

UCLASS()
class UNREALCPP_API AMedKit : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMedKit();

	UFUNCTION()
	void OnOverlap(AActor* MyOverlappedActor, AActor* OtherActor);

};