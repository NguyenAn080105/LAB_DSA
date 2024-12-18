#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int cases;  cin >> cases;
    while(cases--)
    {
        int n;  cin >> n;
        int a[n];
        for(int &x : a) cin >> x;
        sort(a, a + n);
        if(n <= 3) cout << a[n-1] - a[0] << endl;
        else cout << a[n-1] - a[0] + a[n-2] - a[1] << endl;
    }
    return 0;
}