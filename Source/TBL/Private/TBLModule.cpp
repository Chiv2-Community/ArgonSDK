#include "Modules/ModuleManager.h"

#if WITH_EDITOR
// Implemented in TBLMapSummaryTags.cpp: attaches the map-summary metadata
// (ST_Map_* namespaces, gamemode/faction) onto cooked map registry entries.
void RegisterTBLMapSummaryTagEmitter();
#endif

class FTBLGameModule : public FDefaultGameModuleImpl
{
public:
    virtual void StartupModule() override
    {
        FDefaultGameModuleImpl::StartupModule();
#if WITH_EDITOR
        RegisterTBLMapSummaryTagEmitter();
#endif
    }
};

IMPLEMENT_MODULE(FTBLGameModule, TBL);
