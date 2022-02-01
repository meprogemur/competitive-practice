// fin the number of distinct elements in th window of k
//

#include <bits/stdc++.h>
using namespace std;

void findDistinct(vector<int> &n, int k)
{
    unordered_map<int, int> umap;
    int l = n.size();
    for (int i = 0; i < k; i++)
    {
        if (umap.find(n[i]) == umap.end())
        {
            umap[n[i]] = 0;
        }
        else
        {
            umap[n[i]]++;
        }
    }
    cout << umap.size() << endl;

    for (int i = k; i < l; i++)
    {
        if (umap[n[i - k]] == 1)
        {
            umap.erase(n[i - k]);
        }
        else
        {
            umap[n[i - k]]--;
        }

        if (umap.find(n[i]) == umap.end())
        {
            umap[n[i]] = 0;
        }
        else
        {
            umap[n[i]]++;
        }
        cout << umap.size();
    }
}

int main()
{
    vector<int> n = {1, 2, 2, 1, 3, 1, 1, 3};
    findDistinct(n, 4);
}
// not correct