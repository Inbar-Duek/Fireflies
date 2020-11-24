#ifndef __POS_HPP__
#define __POS_HPP__

class Pos
{ 

public:
    Pos(float x = 0, float y = 0);
    Pos& operator=(const Pos& other);
    float GetX() const;
    float GetY() const;

    Pos& AdjustBy(const Pos& p);
    Pos& AdjustBy(const float dx, const float dy);
    void Print() const;
    bool IsEqual(const Pos& p) const;
    bool IsMichael(const Pos& p) const;

    float Distance(const Pos& P) const;//return distanse between self and other
private:
    float m_x;
    float m_y;
};

#endif //__POS_HPP__

int main ()
{
    Pos pos1(3,5);
    Pos pos2 = pos1; //copy constructor
}