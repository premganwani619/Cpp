#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0]<<endl << arr[1]<<endl << arr[2]<<endl << arr[3]<<endl << arr[4]<<endl;
    arr[0]+=10;
    cout<<arr[0]<<endl;
    int a[2][4];
    a[1][2]=90;
    cout<<a[1][2]<<endl;
    cout<<a[1][3]<<endl;
    return 0;
}