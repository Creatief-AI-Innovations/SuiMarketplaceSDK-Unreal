// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ShopItem.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class SUISDKDEMO_API UShopItem : public UObject
{
	GENERATED_BODY()

	public :

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString id;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString name;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString imageUrl;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString creator;


	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString type;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString tag;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString trait;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		TMap<FString, FString> attributes;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString season;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString availability;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		double amount;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString currency;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		TArray<FString> target;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		bool owned = false;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		UTexture2D* itemImage;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		UTexture2D* itemBG;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		FString listingId;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		int32 listingPrice;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		bool listed = false;

	UPROPERTY(BlueprintReadWrite, Category = "SuiMarketDemo ShopItem")
		UTexture2DDynamic* loadedImage;


	
};
