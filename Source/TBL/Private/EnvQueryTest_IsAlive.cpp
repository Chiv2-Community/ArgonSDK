#include "EnvQueryTest_IsAlive.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_IsAlive::UEnvQueryTest_IsAlive() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

