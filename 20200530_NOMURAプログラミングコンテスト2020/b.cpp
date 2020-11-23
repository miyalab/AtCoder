#include <bits/stdc++.h>

using namespace std;

int main()
{
	// 入出力関連設定
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout << fixed << setprecision(20);

	string s;
	cin >> s;

	for(int i=0;i<s.length();i++){
		if(s[i]=='?') s[i]='D';
	}
	cout << s << endl;
}