// Fill out your copyright notice in the Description page of Project Settings.


#include "ConvoTreeReader.h"

// Sets default values
AConvoTreeReader::AConvoTreeReader()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AConvoTreeReader::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AConvoTreeReader::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TArray<FName> AConvoTreeReader::convoText(TArray<FName> texts, int textNum)
{
	TArray<FName> ret;
	ret.Add(texts[0]);
	for (int i = textNum; i < textNum + 5; i++) {
		if (texts.Num() > i) {
			ret.Add(texts[i]);
		}
	}

	return ret;
}

int AConvoTreeReader::responseClick(TArray<FName> texts, FName resp)
{
	int respNum = texts.Find(resp);
	int n = ((respNum - 1) / 5) + 1;
	return ((respNum - n) * 5) + 1;
}

