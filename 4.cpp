#include <iostream>
#include <cmath>
using namespace std;

int BinarySearch(string a[], int &cnt, int n, string x)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r)/2;
        cnt++;
        if(a[m] == x) return m;
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    return 0;
}

int main()
{
    int n;  cin >> n;
    string a[n];
    for(string &x : a) cin >> x;
    string x;   cin >> x;
    int cnt = 0;
    int pos = 0;
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r)/2;
        cnt++;
        if(a[m] == x)
        {
            pos = m;
            break;
        }
        else if(a[m] < x) l = m + 1;
        else r = m - 1;
    }
    if(!pos) cout << -1;
    else cout << pos << endl << cnt;
    return 0;
}