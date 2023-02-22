// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

TArray<AActor*> UMyBlueprintFunctionLibrary::Sort(TArray<AActor*> array)
{
	Algo::Sort(array,
		[](const AActor* a, const AActor* b) {
			return a->GetName() > b->GetName();
		}
	);

	return array;
}