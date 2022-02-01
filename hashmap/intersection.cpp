// intersectin of two arrays
/*
a1 = { 1, 5 ,6 , 6, 7 ,9}
a2  = { 1 ,6, ,7, 7}
returns 3
*/
#include <bits/stdc++.h>
using namespace std;
int intersec(vector<int> &ar1, vector<int> &ar2)
{
    unordered_set<int> set(ar1.begin(), ar1.end());
    int count = 0;
    for (int e : ar2)
    {
        if (set.find(e) != set.end())
        {
            count++;
            set.erase(e);
        }
    }
    return count;
}

int main()
{
    vector<int> a1 = {1, 5, 6, 6, 7, 9};
    vector<int> a2 = {1, 6, 5, 7, 7};
    cout << intersec(a1, a2);
}