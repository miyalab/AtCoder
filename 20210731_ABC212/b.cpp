#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);   

	string s;
	cin >> s;

	if(s[0]==s[1] && s[1]==s[2] && s[2]==s[3]){
		cout << "Weak" << endl;
		return 0;
	}

	int cnt=0;
	for(int i=0; i<(int)s.length() - 1 ;i++){
		if('0'<=s[i] && s[i]<='8' && (char)(s[i]+0x01) == s[i+1]) cnt++;
		else if(s[i]=='9' && s[i+1]=='0') cnt++;
	}

	if(cnt==3) cout << "Weak" << endl;
	else cout << "Strong" << endl;
}