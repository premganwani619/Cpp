#include <bits/stdc++.h>
using namespace std;
int getLongestSubarray(vector<int> &a, long long k)
{
    int maxlen = 0;
    map<long long, int> presummap;
    long long sum = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        if (sum == k)
        {
            maxlen = max(maxlen, i + 1);
        }
        long long rem = sum - k;
        if (presummap.find(rem) != presummap.end())
        {
            int len = i - presummap[rem];
            maxlen = max(len, maxlen);
        }
        if (presummap.find(sum) == presummap.end())
        {
            presummap[sum] = i;
        }
    }
    return maxlen;
}
int main()
{
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
