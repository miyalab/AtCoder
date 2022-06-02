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

	for(int i=(int)s.length() - 2; 0<=i; i--){
		s[i+1] = s[i]; 
	}
	s[0] = '0'; 

	cout << s << endl;
}