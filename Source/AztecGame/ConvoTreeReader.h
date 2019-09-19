// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ConvoTreeReader.generated.h"

UCLASS()
class AZTECGAME_API AConvoTreeReader : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AConvoTreeReader();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "Conversation")
		static TArray<FName> convoText(TArray<FName> texts, int textNum);

	UFUNCTION(BlueprintCallable, Category = "Conversation")
		static int responseClick(TArray<FName> texts, FName resp);

};
