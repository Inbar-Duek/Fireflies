#ifndef __BOARD_HPP__
#define __BOARD_HPP__

#include "Pos.hpp"
#include "Firefly.hpp"


//TODO write Source file
class Board
{
public:
    void init(Pos& Pos, float StartingCharge, float ActivationThreshold, float InternalCycleCharge)
    {
        m_clPos = Pos;
        m_fCurCharge = StartingCharge;
        m_fActivationThreshold = ActivationThreshold;
        m_fInternalCycleCharge = InternalCycleCharge;
        m_bIsCharged = false;
    }

    void MakeStep(void)// Y return bool ?? will allways secceed
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

#endif //__BOARD_HPP__