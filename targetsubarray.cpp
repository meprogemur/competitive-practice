// find the subarray with the given sum
// [10,15,-5,15,-10,5] target = 5

#include <bits/stdc++.h>
using namespace std;

// bruteforce solution to find all subarrays
// for (i..n)
// for (i+1..j)
// sum
// O(n^2)

// using hashmap
bool getSubarray(vector<int> &nums, int sum)
{
    int currentsum = 0;
    int end = -1;
    int start = 0;
    int n = nums.size();
    unordered_map<int, int> summap;
    for (int i = 0; i < n; i++)
    {
        currentsum += nums[i];
        if (currentsum == sum)
        {
            end = i;
            break;
        }
        if (summap.find(currentsum - sum) != summap.end())
        {
            start = summap[currentsum - sum] + 1;
            end = i;
            break;
        }
        summap[currentsum] = i;
    }
    if (end != -1)
    {
        cout << start << " " << end;
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    vector<int> nums = {
        10,
        12,
        -2,
        15,
        -30,
        5};
    cout << getSubarray(nums, 13);
}

// time O(n) space O(n)