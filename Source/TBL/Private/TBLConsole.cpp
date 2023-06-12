#include "TBLConsole.h"

UTBLConsole::UTBLConsole() {
    this->ClientWhiteList.AddDefaulted(10);
    this->SuperAdminClientWhiteList.AddDefaulted(21);
    this->SuperAdminServerWhiteList.AddDefaulted(3);
    this->AdminServerWhiteList.AddDefaulted(30);
    this->LimitedAdminClientWhiteList.AddDefaulted(13);
    this->LimitedAdminServerWhiteList.AddDefaulted(10);
}

