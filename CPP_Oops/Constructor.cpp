#include <iostream>
#include <list>
using namespace std;
class YouTubeChannel
{
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
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
        for (string videotitle :  PublishedVideoTitles)
        {
            cout << videotitle << endl;
        }
    }
};
int main()
{
    YouTubeChannel ytChannel1("Code Beauty", "Saldina");
    YouTubeChannel ytChannel2("Amy Sings", "Amy");
    // Updating SubscriberCount and PublishedVideoTitles
    ytChannel1.SubscribersCount = 1800;
    ytChannel1.PublishedVideoTitles.push_back("C++ for beginners video 1");
    ytChannel1.PublishedVideoTitles.push_back("C++ OOP video 1");
    ytChannel1.PublishedVideoTitles.push_back("HTML & CSS video 1");
    ytChannel1.GetInfo();
    ytChannel2.GetInfo();
    return 0;
}