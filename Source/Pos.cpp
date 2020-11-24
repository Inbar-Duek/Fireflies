#include "../Header/Pos.hpp"
#include <iostream>//cout
#include <math.h> //sqrt, pow


Pos::Pos(const float x, const float y)
    : m_x(x), m_y(y)
{
}
Pos::Pos(const Pos& P)
    :m_x(P.m_x), m_y(P.m_y)
{ 
}

Pos& Pos::operator = (const Pos& P)
{  
    m_x = P.GetX(); 
    m_y = P.GetY();
    return *this;
}

Pos& Pos::AdjustBy(const Pos& p)
{
    return AdjustBy(p.m_x, p.m_y);
}

Pos& Pos::AdjustBy(const float dx, const float dy)
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

float Pos::Distance(const Pos& P) const
{
    return sqrt(pow((m_x - P.m_x), 2) + pow((m_y-P.m_y), 2));
}

float Pos::GetX() const
{
    return m_x;
}

float Pos::GetY() const
{
    return m_y;
}

//No more code after this line