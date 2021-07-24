#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	long long n, k;
	cin >> n >> k;
	
	long long i,j;
	long long uresii = 0;
	long long uresii_sub = 0;
	vector<long long> c(n+1);
	map<long long, vector<long long>> ci;
	for(i=1;i<=n;i++){
		cin >> c[i];
		ci[c[i]].push_back(i);
		if(i<=k){
			if(ci[c[i]].size()==1) uresii++;
			uresii_sub = uresii;
		}
		else{
			for(j=ci[c[i-k]].size()-1; 0<=j; j--){
				if(ci[c[i-k]][j] > i-k){
					break;
				}		
			}
			if(j==-1) uresii_sub--;
			for(j=ci[c[i]].size()-2;0<=j; j--){
				if(ci[c[i]][j] > i-k){
					break;
				}
			}
			if(j==-1) uresii_sub++;
			uresii = max(uresii, uresii_sub);
		}
	}

	cout << uresii << endl;
}