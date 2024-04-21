#include <iostream>
using namespace std;
class Instrument
{
public:
    // pure virtual function
    virtual void Makesound() = 0;
};
class Accordian : public Instrument
{
public:
    void Makesound()
    {
        cout << "Accordian is playing..." << endl;
    }
};
class Piano : public Instrument
{
    // if we will exeute Makesound() function for this class's object it will throw error because base class Makesound() function is a pure virtual function
};
int main()
{
    Accordian a;
    Instrument *i2 = &a;              // 1st Way
    Instrument *i1 = new Accordian(); // 2nd Way
    // Instrument *i3 = new Piano(); it will throw error
    // i1->Makesound();
    // i2->Makesound();
    // i3->Makesound();
    Instrument *Instruments[2] = {i1, i2};
    for (int i = 0; i < 2; i++)
    {
        Instruments[i]->Makesound();
    }

    return 0;
}