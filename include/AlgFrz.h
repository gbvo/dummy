#pragma once

#include "FrzAlg.h"

class AlgFrz {
public:
    void setAlg(const std::string& type);
    void setParams(const std::map<std::string, double>& params);
    void doFrz(int nFrames, u_char* frames[], u_char* output);

private:
    FrzAlg* m_alg;
};