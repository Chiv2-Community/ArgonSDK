#pragma once
#include "CoreMinimal.h"
#include "DebugProperty.h"
#include "PropertyMenuItem.h"
#include "PropertyUndoItem.h"
#include "TBLComponent.h"
#include "PropertyDebugger.generated.h"

class AActor;
class APawn;
class ATBLCharacter;
class ATBLHUD;
class UActorComponent;
class UCanvas;
class UInputComponent;
class UMovementDebugger;
class UStruct;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Input, meta=(BlueprintSpawnableComponent))
class UPropertyDebugger : public UTBLComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLCharacter* OtherCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* OtherActor;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayDebugScrollDir;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayDebugScrollY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MenuDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuHeldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MenuTimerRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SearchText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFilterEnabled;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyMenuItem> PropertiesMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyMenuItem> PropertiesMenuUnfiltered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPropertyMenuItem CurrentMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPropertyUndoItem> UndoStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> RedoStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugProperty SelectedProperty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebugProperty> DebugProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedPropertyIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* MenuInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplicateProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDebugOther;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OtherCharacterTraceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AllClassNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> ActorComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DebugAllOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATBLHUD* MyHUD;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> HistoryBuffer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentHistoryIndex;
    
public:
    UPropertyDebugger();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleShowDebugOther();
    
    UFUNCTION(BlueprintCallable)
    void ToggleReplication();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetOtherCharacter(ATBLCharacter* Other);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetOtherActor(AActor* Other);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetSelectedClass(const FDebugProperty& Property);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerGetBaseClass(FName BaseObj);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerEnableReplication(bool bReplicate);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerDeleteDebugProperty(bool bFromEnd);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAddDebugProperty(const FDebugProperty& Property);
    
public:
    UFUNCTION(BlueprintCallable)
    void PrintToFile();
    
protected:
    UFUNCTION(BlueprintCallable)
    void PreviousProperty();
    
    UFUNCTION(BlueprintCallable)
    void OnPossessed(APawn* NewPawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnMovementSync(UMovementDebugger* MovementDebugger);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NextProperty();
    
    UFUNCTION(BlueprintCallable)
    void MenuUpPressed();
    
    UFUNCTION(BlueprintCallable)
    void MenuRight();
    
    UFUNCTION(BlueprintCallable)
    void MenuReleased();
    
    UFUNCTION(BlueprintCallable)
    void MenuPageUp();
    
    UFUNCTION(BlueprintCallable)
    void MenuPageDown();
    
    UFUNCTION(BlueprintCallable)
    void MenuOpen();
    
    UFUNCTION(BlueprintCallable)
    void MenuLeft();
    
    UFUNCTION(BlueprintCallable)
    void MenuDownPressed();
    
    UFUNCTION(BlueprintCallable)
    void MenuDelete();
    
    UFUNCTION(BlueprintCallable)
    void MenuClose();
    
    UFUNCTION(BlueprintCallable)
    void MenuBackSpace();
    
    UFUNCTION(BlueprintCallable)
    void MenuAdd();
    
    UFUNCTION(BlueprintCallable)
    void InitHUD();
    
    UFUNCTION(BlueprintCallable)
    bool HandleFilterText(const FString& Char);
    
    UFUNCTION(BlueprintCallable)
    UStruct* GetOverrideSelectedClass(const FDebugProperty& Property);
    
    UFUNCTION(BlueprintCallable)
    UStruct* GetOverrideBaseClass(FName BaseObj);
    
    UFUNCTION(BlueprintCallable)
    void FindProperty(const FString& PropName);
    
public:
    UFUNCTION(BlueprintCallable)
    static void DrawProperty(UCanvas* Canvas, float& XPos, float& YPos, const FString& PropName, const FString& PropVal);
    
    UFUNCTION(BlueprintCallable)
    void DrawDebug(UCanvas* Canvas);
    
protected:
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollUp();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollReleased();
    
    UFUNCTION(BlueprintCallable)
    void DisplayDebugScrollDown();
    
public:
    UFUNCTION(BlueprintCallable)
    void DebugInputChar(const FString& Char);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CreateMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseDebugger();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientReturnSelectedClass(UStruct* Struct);
    
    UFUNCTION(BlueprintCallable)
    void ClearFilter();
    
    UFUNCTION(BlueprintCallable)
    void ApplyFilter(const FString& Text);
    
};

