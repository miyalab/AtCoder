// インクルード
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>

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

	int n,k;
	bool d[10];
	for(int i=0;i<10;i++) d[i] = false;

	cin >> n >> k;
	for(int i=0;i<k;i++){
		int x;
		cin >> x;
		d[x] = true;
	}

	bool flag = false;
	while(1){
		string s = to_string(n);
		for(int i=0;i<s.length();i++){
			if(d[s[i]-'0'] == true){
				break;
			}
			if(i==s.length()-1){
				cout << n << endl;
				return 0;
			}
		}
		n++;
	}
}