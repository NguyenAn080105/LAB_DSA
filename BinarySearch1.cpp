#include <iostream>
using namespace std;

int BinarySearch(int a[], int &cnt, int n, int x)
{
    int l = 0, r = n - 1;
    while(l <= r)
    {
        int m = (l + r)/2;
        cnt++;
        if(a[m] > x ) r = m - 1;
        else if(a[m] < x) l = m + 1;
        else return m;
    }
    return 0;
}

int main()
{
    int n;  cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int x;   cin >> x;
    int cnt = 0;
    int pos = BinarySearch(a,cnt,n,x);
    if(!pos) cout << -1;
    else cout << pos << endl << cnt;
}