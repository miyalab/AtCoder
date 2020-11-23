// 2020.05.23 Thu
// 第3回アルゴリズム実技検定
// F問題 --

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

	int n;
	cin >> n;
	vector<string> a(n);
	for(int i=0;i<n;i++) cin >> a[i];

	string ans="";
	// S_1-S_(n/2)
	bool check=false;
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n;j++){
			check=false;
			for(int k=0;k<n;k++){
				if(a[i][j]==a[n-1-i][k]){
					ans+=a[i][j];
					check = true;
					break;
				}
			}
			if(check) break;
		}
		if(!check){
			cout << "-1" << endl;
			return 0;
		}
	}

	string center = "";
	if(n%2==1) center = a[n/2][0];
	string rev = ans;
	reverse(rev.begin(),rev.end());

	cout << ans + center + rev << endl;
}