#include "GameServerQuery.h"

AGameServerQuery::AGameServerQuery() {
    this->QueryIpAddress = TEXT("0.0.0.0");
    this->QueryPort = 7071;
    this->PingPort = 3075;
    this->QueryThreadWaitTimeMilliseconds = 100;
}

