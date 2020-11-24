#include "../Header/Firefly.hpp"

void Firefly::init(Pos& Pos, float StartingCharge, float ActivationThreshold, float InternalCycleCharge, float ExternalEffectSensitivity)
{
    m_clPos = Pos;
    m_fCurCharge = StartingCharge;
    m_fActivationThreshold = ActivationThreshold;
    m_fInternalCycleCharge = InternalCycleCharge;
    m_fExternalEffectSensitivity = ExternalEffectSensitivity;
    m_bIsCharged = false;
}

void Firefly::MakeStep(void)
{    
    SelfProgress();
    float Delta = m_fCurCharge - m_fActivationThreshold;
    if(Delta > 0)
    {
        m_bIsCharged = true;
        m_fCurCharge = Delta;
    }
}

bool Firefly::IsCharged(void) const
{
    return m_bIsCharged;
}

void Firefly::ResetCharged(void)
{
    m_bIsCharged = false;
}

void Firefly::AddExternalEffect(unsigned int Distance)
{
    m_fCurCharge += (m_fExternalEffectSensitivity/(Distance^2));
}

void Firefly::SelfProgress()
{
    m_fCurCharge += m_fInternalCycleCharge;
}


// -----NO CODE AFTER THIS LINE-----