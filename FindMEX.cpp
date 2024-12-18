#include <bits/stdc++.h>
#include <set>
#define loop(a, n)  for(int i = a; i < n; i++)
using namespace std;

int main()
{
    int n;  cin >> n;
    int a[n];
    set<int> ds;
    int maxNum;
    for(int &x : a)
    {
        cin >> x;
        maxNum = max(maxNum, x);
    }
    for(int i = 0; i <= maxNum + 1; i++)
    {
        ds.insert(i);
    }
    loop(0, n)
    {
        set<int>::iterator it = ds.find(a[i]);
        if(it != ds.end())  ds.erase(it);
        cout << *ds.begin() << " ";
    }
    return 0;
}