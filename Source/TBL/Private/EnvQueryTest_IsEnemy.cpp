#include "EnvQueryTest_IsEnemy.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UEnvQueryTest_IsEnemy::UEnvQueryTest_IsEnemy() {
    this->Context = UEnvQueryContext_Querier::StaticClass();
}

