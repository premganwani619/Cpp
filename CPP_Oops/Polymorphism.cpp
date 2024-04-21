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
    int contentquality;

public:
    YouTubeChannel(string name, string ownername)
    {
        Name = name;
        OwnerName = ownername;
        SubscribersCount = 0;
        contentquality = 0;
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
    void CheckAnalytics()
    {
        if (contentquality < 5)
        {
            cout << Name << "'s Content quality is bad " << endl;
        }
        else
        {
            cout << Name << "'s Content quality is good " << endl;
        }
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
        contentquality++;
    }
};
class Singingchannel : public YouTubeChannel
{
public:
    Singingchannel(string name, string ownername) : YouTubeChannel(name, ownername)
    {
    }
    void practice()
    {
        cout << OwnerName << " is Learning new song , Experimenting with music , Teaching how to sing " << endl;
        contentquality++;
    }
};
int main()
{
    Cookingchannel Cookingytchannel("Ammy's Kitchen", "Ammy");
    Singingchannel Singingytchannel("Jhonsings", "jhon");
    YouTubeChannel *channel1 = &Cookingytchannel;
    YouTubeChannel *channel2 = &Singingytchannel;
    Cookingytchannel.practice();
    Cookingytchannel.practice();
    Cookingytchannel.practice();
    Cookingytchannel.practice();
    Singingytchannel.practice();
    Singingytchannel.practice();
    Singingytchannel.practice();
    Singingytchannel.practice();
    Singingytchannel.practice();
    Singingytchannel.practice();
    Singingytchannel.practice();
    Singingytchannel.practice();
    //Polymorphism
    channel1->CheckAnalytics();
    channel2->CheckAnalytics();
    return 0;
}