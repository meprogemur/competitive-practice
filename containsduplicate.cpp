// using unordered_set, hashmap

#include <bits/stdc++.h>
using namespace std;

bool containdupli(vector<int> &arr)
{
    unordered_set<int> set(arr.begin(), arr.end());
    return set.size() != arr.size();
}

int main()
{
    vector<int> nums = {1,
                        2,
                        3,
                        4,
                        5,
                        6,
                        7};
    cout << containdupli(nums);
}
