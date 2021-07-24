#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	map<string, bool> si; 
	for(int i=0; i<4; i++){
		string s;
		cin >> s;
		si[s] = true;
	}

	if(si.size() >= 4) cout << "Yes" << endl;
	else cout << "No" << endl;
}