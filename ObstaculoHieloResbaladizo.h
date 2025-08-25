#pragma once

#include "CoreMinimal.h"
#include "ObstaculoHielo.h"
#include "ObstaculoHieloResbaladizo.generated.h"

UCLASS()
class BOYADVENTUREUSEX_API AObstaculoHieloResbaladizo : public AObstaculoHielo
{
    GENERATED_BODY()

public:
    virtual void Activar_Implementation() override;
};
