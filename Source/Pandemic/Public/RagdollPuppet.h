#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "RagdollPuppet.generated.h"

UINTERFACE(MinimalAPI)
class URagdollPuppet : public UInterface {
    GENERATED_BODY()
};

class IRagdollPuppet : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(Reliable, Server)
    virtual void Server_RagdollStopAndReclaim() /*PURE_VIRTUAL(Server_RagdollStopAndReclaim,)*/;
    
    UFUNCTION(Reliable, Server)
    virtual void Server_RagdollPrepare() /*PURE_VIRTUAL(Server_RagdollPrepare,)*/;
    
    UFUNCTION(Reliable, Server)
    virtual void Server_RagdollInitiate() /*PURE_VIRTUAL(Server_RagdollInitiate,)*/;
    
    UFUNCTION()
    virtual bool RagdollCanActivate() PURE_VIRTUAL(RagdollCanActivate, return false;);
    
    UFUNCTION(NetMulticast, Reliable)
    virtual void NetMulticast_RagdollStopAndReclaim() /*PURE_VIRTUAL(NetMulticast_RagdollStopAndReclaim,)*/;
    
    UFUNCTION(NetMulticast, Reliable)
    virtual void NetMulticast_RagdollPrepare() /*PURE_VIRTUAL(NetMulticast_RagdollPrepare,)*/;
    
    UFUNCTION(NetMulticast, Reliable)
    virtual void NetMulticast_RagdollInitiate() /*PURE_VIRTUAL(NetMulticast_RagdollInitiate,)*/;
    
};

