// 2020.05.23 Thu
// 第3回アルゴリズム実技検定
// A問題 --

// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// メイン
int main()
{
	// 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	string s,t;

	cin >> s >> t;

	if(s==t){
		cout << "same" << endl;
		return 0;
	}

	for(int i=0;i<s.length();i++){
		if('A'<=s[i] && s[i]<='Z') s[i]+=0x20;
	}
	for(int i=0;i<t.length();i++){
		if('A'<=t[i] && t[i]<='Z') t[i]+=0x20;
	}
	
	if(s==t) cout << "case-insensitive" << endl;
	else cout << "different" << endl;
}