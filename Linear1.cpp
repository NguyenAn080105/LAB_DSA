#include<iostream>
using namespace std;

int main()
{
    int n;  cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int i, x;   cin >> x;
    for(i = 0; i < n; i++)
    {
        if(a[i] == x)   break;
    }
    if(i == n) cout << -1;
    else cout << i << endl << i + 1 << endl << n - i - 1 << endl << n - i;
    return 0;
}