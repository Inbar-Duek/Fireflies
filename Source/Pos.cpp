#include <iostream>
#include "../Header/Pos.hpp"

/******************************************************************************/
Pos::Pos(const float x, const float y)
    : m_x(x), m_y(y)
{
}


Pos& Pos::operator = (const Pos& Other)
{  
    m_x = Other.GetX(); 
    m_y = Other.GetY();
    return *this;
}


Pos& Pos::AdjustBy(const Pos& p)
{
    return AdjustBy(p.m_x, p.m_y);
}


Pos& Pos::AdjustBy(const int dx, const int dy)
{
    m_x += dx;
    m_y += dy;

    return *this;
}


void Pos::Print() const
{
    std::cout<<"("<<m_x<<","<<m_y<<")"<<std::endl;
}


bool Pos::IsEqual(const Pos& p) const
{
    return ((m_x == p.m_x) && (m_y == p.m_y));
}

bool Pos::IsMichael(const Pos& p) const
{
    return true;
}

//No more code after this line