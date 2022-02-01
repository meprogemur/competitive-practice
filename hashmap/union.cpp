// union of two arrays
/*
a = {5,10,15,5}
b = {10, 4, 15, 5}
size = 4 */

#include <bits/stdc++.h>
using namespace std;

// int unionbybruteforce ` ill do this after learning all sorts

int unionbyhash(vector<int> &ar1, vector<int> &ar2, int n)
{
    unordered_set<int> set(ar1.begin(), ar1.end());
    set.insert(ar2.begin(), ar2.end());
    return set.size();
}

int main()
{
    vector<int> ar1 = {2, 5, 3, 6, 6, 9};
    vector<int> ar2 = {7, 8, 1, 6, 6, 9};
    cout << unionbyhash(ar1, ar2, 7);
}