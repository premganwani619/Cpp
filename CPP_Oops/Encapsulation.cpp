#include <iostream>
#include <list>
using namespace std;
class YouTubeChannel
{
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

public:
    YouTubeChannel(string name, string ownername)
    {
        Name = name;
        OwnerName = ownername;
        SubscribersCount = 0;
    }

    void GetInfo()
    {
        cout << "Name : " << Name << endl;
        cout << "Owner Name : " << OwnerName << endl;
        cout << "Subscriber Count : " << SubscribersCount << endl;
        cout << "Videos : ";
        for (string videotitle : PublishedVideoTitles)
        {
            cout << videotitle << endl;
        }
    }
    void Subscribe()
    {
        SubscribersCount++;
    }
    void Unubscribe()
    {
        if (SubscribersCount > 0)
        {
            SubscribersCount--;
        }
    }
    void PublishVideo(string Title)
    {
        PublishedVideoTitles.push_back(Title);
    }

    void SetData(string name, string ownername)
    {
        Name = name;
        OwnerName = ownername;
    }
    string GetName()
    {
        return Name;
    }
    string GetOwnername()
    {
        return OwnerName;
    }
};
int main()
{
    YouTubeChannel ytChannel1("Code Beauty", "Saldina");
    YouTubeChannel ytChannel2("Amy Sings", "Amy");
    ytChannel1.PublishVideo("C++ for beginners video 1");
    ytChannel1.PublishVideo("C++ OOP video 1");
    ytChannel1.PublishVideo("HTML & CSS video 1");
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Subscribe();
    ytChannel1.Unubscribe();
    ytChannel2.SetData("Prem Unleashes","Prem");
    cout<<"Channel 1 name is "<<ytChannel2.GetName()<<endl;
    cout<<"Channel 1 ownername is "<<ytChannel2.GetOwnername()<<endl;
    ytChannel1.GetInfo();
    ytChannel2.GetInfo();
    return 0;
}