#include "TBLReplicationGraph.h"

UTBLReplicationGraph::UTBLReplicationGraph() {
    this->RootGridNodes[0] = NULL;
    this->RootGridNodes[1] = NULL;
    this->RootGridNodes[2] = NULL;
    this->RootGridNodes[3] = NULL;
    this->RootGridNodes[4] = NULL;
    this->RootGridNodes[5] = NULL;
    this->AlwaysRelevantNode = NULL;
    this->SlowAlwaysRelevantNode = NULL;
}

