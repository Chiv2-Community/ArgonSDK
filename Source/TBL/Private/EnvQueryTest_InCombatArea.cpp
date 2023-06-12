#include "EnvQueryTest_InCombatArea.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_InCombatArea::UEnvQueryTest_InCombatArea() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

