#include "../Header/Firefly.hpp"

void Firefly::init(Pos& Pos, float StartingCharge, float ActivationThreshold, float InternalCycleCharge)
{
    m_clPos = Pos;
    m_fCurCharge = StartingCharge;
    m_fActivationThreshold = ActivationThreshold;
    m_fInternalCycleCharge = InternalCycleCharge;
    m_bIsCharged = false;
}

void Firefly::MakeStep(void)
{
    m_bIsCharged = false;    
    SelfProgress();
    float Delta = m_fCurCharge - m_fActivationThreshold;
    if(Delta > 0)
    {
        m_bIsCharged = true;
        m_fCurCharge = Delta;
    }
}