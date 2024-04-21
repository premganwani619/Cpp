#include <iostream>
using namespace std;
class Smartphone
{
public:
    virtual void TakeASelfie() = 0;
    virtual void MakeACall() = 0;
};
class Android : public Smartphone
{
public:
    void TakeASelfie()
    {
        cout << "Android is taking selfie.." << endl;
    }
    void MakeACall()
    {
        cout << "Android is making a call.." << endl;
    }
};
class Iphone : public Smartphone
{
public:
    void TakeASelife()
    {
        cout << "Iphome is taking selfie.." << endl;
    }
    void MakeACall()
    {
        cout << "Iphone is making a call.." << endl;
    }
};

int main()
{
    Smartphone *Phone1 = new Android();
    Smartphone *Phone2 = new Android();
    Phone1->TakeASelfie();
    Phone2->TakeASelfie();
    Phone1->MakeACall();
    Phone2->MakeACall();
    return 0;
}