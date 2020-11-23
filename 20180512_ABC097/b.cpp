#include <bits/stdc++.h>

using namespace std;

int main()
{
	int x;
	cin >> x;
	vector <bool > expo(x+1);
	expo[1] = 1;
	for(int b=2;b<=x;b++){
		int v = b*b;
		while(v<=x){
			expo[v] = 1;
			v *= b;
		}
	}
	for(int i=x;i>=1;i--) if(expo[i]){
		cout << i << endl;
		return 0;
	}
}