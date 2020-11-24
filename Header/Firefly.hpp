#ifndef __FIREFLY_HPP__
#define __FIREFLY_HPP__

#include "Pos.hpp"

class Firefly
{
public:
    void init(Pos& Pos, float StartingCharge, float ActivationThreshold, float InternalCycleCharge, float ExternalEffectSensitivity);

    void MakeStep(void);
    
    void ResetCharged(void);

    bool IsCharged(void) const;

    void AddExternalEffect(unsigned int Distance);

private:
    Pos m_clPos;
    float m_fCurCharge;
    float m_fActivationThreshold;
    float m_fInternalCycleCharge;
    float m_fExternalEffectSensitivity;
    bool m_bIsCharged;
    
    void SelfProgress();
};

#endif //__FIREFLY_HPP__