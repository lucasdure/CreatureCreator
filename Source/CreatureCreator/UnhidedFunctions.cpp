// Fill out your copyright notice in the Description page of Project Settings.


#include "UnhidedFunctions.h"

void UUnhidedFunctions::ChangeTransform(const TArray<FTransform> ListOfTransform, USkeletalMeshComponent* SkeletalMeshRef)
{
	SkeletalMeshRef->SetRefPoseOverride(ListOfTransform);
}