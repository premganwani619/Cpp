#include <iostream>
using namespace std;
int main()
{
    int age;
    cin >> age;
    if (age < 18)
        cout << "Not eligible for job";
    else if (age < 55)
    {
        cout << "Eligible for job";
    }
    else if (age < 58)
    {
        cout << "Eligible for job, But retiremment soon";
    }
    else
    {
        cout << "Retirement time";
    }
    return 0;
}