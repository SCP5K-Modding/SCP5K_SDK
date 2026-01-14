#pragma once
#include "CoreMinimal.h"
#include "SteamID.generated.h"

// Blueprint in UE 4.27 does not support 64-bit integer properties.
// Keep this struct non-Blueprint to avoid UHT errors related to unsupported types.
USTRUCT(BlueprintType)
struct STEAMCORE_API FSteamID
{
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int64 Value;

    FSteamID() : Value(0) {}
    
    // Explicit constructor for conversion
    explicit FSteamID(int64 InValue) : Value(InValue) {}
    
    // Ensure trivial destructibility is clear to the compiler
    ~FSteamID() = default;
    
    // Copy/move operations
    FSteamID(const FSteamID&) = default;
    FSteamID(FSteamID&&) = default;
    FSteamID& operator=(const FSteamID&) = default;
    FSteamID& operator=(FSteamID&&) = default;
};