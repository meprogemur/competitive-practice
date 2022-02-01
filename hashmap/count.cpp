// count distinct elements

/*
suppose ar[] = {2 ,3, 6,7,3,2}
so distinct elements count = 4 */

#include <bits/stdc++.h>
using namespace std;

void findDistinctBruteforce(int a[], int length)
{
    int count = 0;
    for (int i = 0; i < length; i++)
    {
        if (i == 0)
            count++;
        for (int j = 0; j < i; j++)
        {
            if (a[j] == a[i])
            {
                break;
            }
            if (j == i - 1)
            {
                count++;
            }
        }
    }
    cout << count << "\n";
}

void countDistinctHash(vector<int> &nums, int size)
{
    unordered_set<int> set(nums.begin(), nums.end());
    cout << set.size();
}

int main()
{
    vector<int> nums = {2, 3, 6, 7, 3, 2, 8, 8, 8, 3, 5};
    countDistinctHash(nums, 11);
}