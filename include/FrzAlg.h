#pragma once

#include <string>
#include <map>


class FrzAlg {
public:
    virtual ~FrzAlg() = default;
    virtual void setParameters(const std::map<std::string, double>& params) = 0;
    virtual void doFrz(int n, u_char* frames[], u_char* output) = 0;
    virtual std::string getName() const = 0;

};
