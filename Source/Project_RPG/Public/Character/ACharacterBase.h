#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "ACharacterBase.generated.h"

UCLASS(Abstract)
class PROJECT_RPG_API AACharacterBase : public ACharacter
{
	GENERATED_BODY()

public:
	AACharacterBase();

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Combat")
	TObjectPtr<UStaticMeshComponent> weapon;
};
