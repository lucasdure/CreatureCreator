// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UnhidedFunctions.generated.h"

/**
 * 
 */
UCLASS()
class CREATURECREATOR_API UUnhidedFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "SkeletalMesh")
		static void ChangeTransform(const TArray<FTransform> ListOfTransform, USkeletalMeshComponent* SkeletalMeshRef);
	
};
