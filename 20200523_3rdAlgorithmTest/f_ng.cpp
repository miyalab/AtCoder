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

	// 出現文字カウント
	vector<int> c_cnt(27,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			c_cnt[a[i][j]-'a']++;
		}
	}

	// // デバッグ用
	// for(int i=0;i<26;i++){
	// 	cout << c_cnt[i] << endl;
	// }

	int check1 = n%2;	// 奇数なら+1
	int check2 = n/2;	// 偶数個ある文字の必要数

	string ans="";
	string center="";
	for(int i=0;i<26;i++){
		while(c_cnt[i]>=2 && check2>0){
			check2--;
			c_cnt[i]-=2;
			ans+=i+'a';
		}
		if(c_cnt[i]>=1 && check1>0){
			check1--;
			c_cnt[i]-=1;
			center=i+'a';
		}

		// if(c_cnt[i]>0 && (c_cnt[i])%2==0 && check2){
		// 	// for(int j=0;j<c_cnt[i]/2;j++){
		// 	while(c_cnt[i]>=2){
		// 		if(check2==0) break;
		// 		check2--;
		// 		c_cnt[i] -= 2;
		// 		ans+=i+'a';
		// 	}
			
		// }
		// if(c_cnt[i]>0 && check1){
		// 	check1--;
		// 	center += i+'a';
		// }
	}
//	cout << check1 << " " << check2 << endl;
	if(check2!=0 || check1!=0){
		cout << "-1" << endl;
		return 0;
	}

	string rev = ans;
	std::reverse(rev.begin(),rev.end());

	cout << ans+center+rev << endl;
}