#include <iostream>
#include <list>
using namespace std;
class YouTubeChannel
{
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

protected:
    string OwnerName;

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
        cout << "Videos : " << endl;
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
class Cookingchannel : public YouTubeChannel
{
public:
    Cookingchannel(string name, string ownername) : YouTubeChannel(name, ownername)
    {
    }
    void practice()
    {
        cout << OwnerName << " is Learning new food items, Experimenting with spices , Teaching how to cook " << endl;
    }
};
int main()
{
    Cookingchannel Cookingytchannel1("Ammy's kitchen", "Ammy");
    Cookingchannel Cookingytchannel2("Jhon's kitchen", "Jhon");
    YouTubeChannel Ytchannel("Pushpender's classes", "Pushpender");
    Cookingytchannel1.PublishVideo("My way to Make Cake");
    Cookingytchannel1.PublishVideo(" How To Make Dosa");
    Cookingytchannel1.PublishVideo("Intro to Spices");
    Cookingytchannel1.Subscribe();
    Cookingytchannel1.Subscribe();
    Cookingytchannel1.Subscribe();
    Cookingytchannel1.Subscribe();
    Cookingytchannel1.Unubscribe();
    Cookingytchannel1.GetInfo();
    
    Cookingytchannel1.practice();
    Cookingytchannel2.practice();

    return 0;
}