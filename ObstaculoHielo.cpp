#include "ObstaculoHielo.h"
#include "Engine/Engine.h"

void AObstaculoHielo::Activar_Implementation()
{
    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Cyan, TEXT("¡Obstaculo de HIELO activado!"));
    }
}