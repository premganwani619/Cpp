#include <iostream>
using namespace std;
int count;
int freq_of_number(int num, int arr[], int len)
{

    for (int i = 0; i < len; i++)
    {
        if (num == arr[i])
        {
            count++;
        }
    }

    return count;
}
int main()
{
    int len,num;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    cin>>num;
    cout<<freq_of_number(num,arr,len);
    //Time complexity O(n) for each number that we are checking
    //if array size is huge then it may create a problelm
    //for ex. if size of both arrays are 10^5 then the time complexity will be O(10^5*10^5)
    //which will be O(10^10)
    //But in coding rounds our program should have time complexity under the O(10^8)
    //Bcs (10^8) can run in 1 seconds
    //O(10^10) will run in 100 seconds
    //That's why we use hashing
    return 0;
}