#include "Pos.cpp"
#include ""
int main ()
{
    Pos pos1(3,5);
    Pos pos2 = pos1; //copy constructor
    Pos pos3;


    pos3.Print();
    pos3 = pos2;
    pos3.Print();
}