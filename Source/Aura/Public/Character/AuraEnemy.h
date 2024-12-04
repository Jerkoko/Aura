// Copyright Three Brown Bears

#pragma once

#include "CoreMinimal.h"
#include "Character/AuraCharacterBase.h"
#include "Interaction/EnemyInterface.h"
#include "AuraEnemy.generated.h"

/**
 * 
 */
UCLASS()
class AURA_API AAuraEnemy : public AAuraCharacterBase, public IEnemyInterface
{
	GENERATED_BODY()

public:
	AAuraEnemy();

	// <b>Enemy interface</b>
	virtual void HighlightActor() override;
	virtual void UnHighlightActor() override;
	// End <b>Enemy interface</b>

protected:
	virtual void BeginPlay() override;
};
