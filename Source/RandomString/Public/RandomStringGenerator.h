// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RandomStringGenerator.generated.h"

/**
 * 
 */
UCLASS()
class RANDOMSTRING_API URandomStringGenerator : public UObject
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, meta = (category = "RandomString"))
		static FString RandomString(int length);
};
