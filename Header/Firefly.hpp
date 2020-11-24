#ifndef __FIREFLY_HPP__
#define __FIREFLY_HPP__

#include "Pos.hpp"

class Firefly
{
public:
    void init(Pos& Pos, float StartingCharge, float ActivationThreshold, float InternalCycleCharge);

    void MakeStep(void);
    
    bool IsCharged(void) const
    {
        return m_bIsCharged;
    }

    void AddExternalEffect(unsigned int Distance)
    {
        m_fCurCharge += (7/(Distance^2));
    }

private:
    Pos m_clPos;
    float m_fCurCharge;
    float m_fActivationThreshold;
    float m_fInternalCycleCharge;
    bool m_bIsCharged;
    
    void SelfProgress()
    {
        m_fCurCharge += m_fInternalCycleCharge;
    }
};

#endif //__FIREFLY_HPP__