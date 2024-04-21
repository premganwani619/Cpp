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
};
int main()
{
    YouTubeChannel ytChannel;
    ytChannel.Name = "Code Beauty"; 
    ytChannel.OwnerName = "Saldina";
    ytChannel.SubscribersCount = 1800;
    ytChannel.PublishedVideoTitles = {"C++ for beginners video 1", "HTML & CSS video 1", "C++ OOP video 1"};
    cout <<"Name : "<< ytChannel.Name << endl;
    cout <<"Owner Name : "<< ytChannel.OwnerName << endl;
    cout <<"Subscriber Count : "<< ytChannel.SubscribersCount << endl;
    cout<<"Videos : ";
    for (string videotitle : ytChannel.PublishedVideoTitles)
    {
        cout << videotitle << endl;
    }

    return 0;
}