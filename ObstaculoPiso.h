// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoPiso.generated.h"

/**
 * 
 */
UCLASS()
class BOYADVENTUREUSFX_API AObstaculoPiso : public AObstaculo
{
	GENERATED_BODY()

public:
	AObstaculoPiso();
	virtual void OnOverlapsBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) override;

	virtual void Activarse() override;

};
