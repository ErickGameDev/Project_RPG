#include "Character/ACharacterBase.h"

// Sets default values
AACharacterBase::AACharacterBase()
{
 	
	PrimaryActorTick.bCanEverTick = false;

	weapon = CreateDefaultSubobject<USkeletalMeshComponent>("Weapon");
	weapon->SetupAttachment(GetMesh(), FName("WeaponHandSocket"));
	weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
}

void AACharacterBase::BeginPlay()
{
	Super::BeginPlay();
	
}

