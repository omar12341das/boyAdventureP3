#include "Obstaculo.h"
#include "Engine/Engine.h"

AObstaculo::AObstaculo()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AObstaculo::Activar_Implementation()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::White, TEXT("Obstaculo base activado"));
    }
}
