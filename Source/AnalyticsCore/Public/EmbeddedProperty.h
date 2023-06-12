#pragma once
#include "CoreMinimal.h"
#include "EmbeddedProperty.generated.h"

USTRUCT(BlueprintType)
struct FEmbeddedProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TFieldPath<FProperty> Property;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmbeddedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EmbeddedQualifiedName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EmbeddedPropertyOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TFieldPath<FProperty>> EmbeddedPropertyChain;
    
    ANALYTICSCORE_API FEmbeddedProperty();
};

