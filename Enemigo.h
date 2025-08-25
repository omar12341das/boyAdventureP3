// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Enemigo.generated.h"

class UStaticMeshComponent;

UCLASS()
class BOYADVENTUREUSFX_API AEnemigo : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AEnemigo();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

private:
	float Salud;
	float VelocidadMovimiento;
	float VelocidadAtaque;
	float VelocidadSalto;
	float VelocidadGiro;
	
	float Armadura;
	float DanoAtaque;
	float Nivel;
	float Experiencia;

	bool bVivo;
	bool bActivo;

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Componentes")
	UStaticMeshComponent* MallaEnemigo;

	//class UStaticMeshComponent* MallaBloque;
};
