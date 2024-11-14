#include <stdexcept>
#include "AlgFrz.h"
#include "LuckyImageAlg.h"
#include "MotionCompensateAlg.h"
#include "NlmDenoiseAlg.h"


void AlgFrz::setAlg(const std::string& type)
{
    if (type == "Lucky Image") {
        m_alg = new LuckyImageAlg();
    } else if (type == "Motion Compensate") {
        m_alg = new MotionCompensateAlg();
    } else if (type == "Nlm Denoise") {
        m_alg = new NlmDenoiseAlg();
    } else {
        throw std::invalid_argument("Unknown algorithm type");
    }
}

void AlgFrz::setParams(const std::map<std::string, double>& params)
{
    if (m_alg) {
        m_alg->setParameters(params);
    } else {
        throw std::runtime_error("Algorithm not set");
    }
}

void AlgFrz::doFrz(int nFrames, u_char* frames[], u_char* output)
{
    if (m_alg) {
        m_alg->doFrz(nFrames, frames, output);
    } else {
        throw std::runtime_error("Algorithm not set");
    }
}
