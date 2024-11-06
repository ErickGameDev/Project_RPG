#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "APlayerCharacter.generated.h"

UCLASS(Abstract)
class PROJECT_RPG_API AAPlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	AAPlayerCharacter();

protected:
	virtual void BeginPlay() override;
};
