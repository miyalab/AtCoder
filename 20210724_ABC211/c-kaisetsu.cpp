#include <bits/stdc++.h>

using namespace std;

long long MOD = 1e9 + 7;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	string keyword = "chokudai";
	string s;
	cin >> s;

	vector<int> ans(s.length());

	int index = 0;
	for(int j=0;j<(int)s.length();j++){
		if(keyword[0] == s[j]) index++;
		ans[j] = index;
	}

	for(int i=1;i<(int)keyword.length();i++){
		for(int j=0;j<(int)s.length();j++){
			if(keyword[i] == s[j]){
				ans[j] = ans[j-1] + ans[j];
				ans[j] %= MOD;
			}
			else{
				if(j==0) ans[j] = 0;
				else ans[j] = ans[j-1];
			}
		}
	}

	cout << ans[s.length() - 1] << endl;
}