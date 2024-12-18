#include <iostream>
using namespace std;

int main()
{
    int n;  cin >> n;
    int a[n];
    for(int &x : a) cin >> x;
    int i, x;   cin >> x;
    int cnt = 0;
    for(i = 0; i < n; i++)
        if(a[i] == x)
            cnt++;
    cout << cnt << endl;
    if(cnt)
    {
            for(int j = 0; j < n; j++)
                if(a[j] == x)
                    cout << j << " " << j + 1 << endl;
    }
    return 0;
}