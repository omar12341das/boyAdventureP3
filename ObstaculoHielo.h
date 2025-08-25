#pragma once

#include "CoreMinimal.h"
#include "Obstaculo.h"
#include "ObstaculoHielo.generated.h"

UCLASS()
class BOYADVENTUREUSEX_API AObstaculoHielo : public AObstaculo
{
    GENERATED_BODY()

public:
    virtual void Activar_Implementation() override;
};

