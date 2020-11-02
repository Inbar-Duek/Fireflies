#ifndef __FIREFLY_HPP__
#define __FIREFLY_HPP__

#include "Pos.hpp"


class Firefly
{ 

public:
    bool Update(void);
    void AddActivation(vector& (Pos));

private:
    Pos Pos;
    float fCurCharge;
    float fActivationThreshold;

};

#endif //__FIREFLY_HPP__