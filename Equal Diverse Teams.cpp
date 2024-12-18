#include <iostream>
#include <map>
using namespace std;
int main(){
	int testcase; 
	cin >> testcase;
	while(testcase--){
		int n,k; cin>>n>>k;
		map<int,int> mark;

		for(int i=0; i<n;i++){
			int x; cin>>x;
			mark[x]++;
		}
		int x = 0, y = 0;
    for(auto i : mark) {
        if(i.second == 1) {
            x++;
        } else {
            y++;
        }
    }

    if((x + y) > 2 * k || (x + y) < k) {
        cout << "NO" << endl;
    }else if((2 * y + x) >= ( 2 * k)) 
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
	}
	return 0;
}