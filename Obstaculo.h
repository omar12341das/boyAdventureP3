#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstaculo.generated.h"

UCLASS()
class BOYADVENTUREUSEX_API AObstaculo : public AActor
{
    GENERATED_BODY()

public:
    AObstaculo();

    // Método virtual para polimorfismo
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Obstaculo")
    void Activar();
    virtual void Activar_Implementation();
};