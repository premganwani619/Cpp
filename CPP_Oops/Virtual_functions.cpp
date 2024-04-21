#include <iostream>
using namespace std;
class Instrument
{
public:
    // virtual function
    virtual void Makesound()
    {
        cout << "Instrument is playing..." << endl;
    }
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
    // Having no Makesound() function Virtual function will be executed
};
int main()
{
    Accordian a;
    Instrument *i2 = &a;              // 1st Way
    Instrument *i1 = new Accordian(); // 2nd Way
    Instrument *i3 = new Piano();
    i1->Makesound();
    i2->Makesound();
    i3->Makesound();

    return 0;
}
// Virtual functions are used to implement run time implementation
// If a class have atleast 1 pure virtual function then the class is abstract class