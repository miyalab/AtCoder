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
	
	long long uresii = 0;
	vector<long long> c(n+1);
	map<long long, long long> ci;
	for(long long i=1;i<=n;i++){
		cin >> c[i];

		if(i<=k){
			ci[c[i]]++;
			uresii = (long long)ci.size();
		}
		else{		
			ci[c[i]]++;
			ci[c[i-k]]--;
			if(ci[c[i-k]]==0) ci.erase(c[i-k]);
			uresii = max(uresii, (long long)ci.size());
		}
	}

	cout << uresii << endl;
}