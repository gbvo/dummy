#pragma once

#include "FrzAlg.h"

class MotionCompensateAlg : public FrzAlg {
public:
    void setParameters(const std::map<std::string, double>& params) override;
    void doFrz(int nFrames, u_char* frames[], u_char* output) override;
    std::string getName() const override {
        return "Motion Compensate";
    }
};