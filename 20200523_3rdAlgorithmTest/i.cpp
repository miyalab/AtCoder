// 2020.05.23 Thu
// 第3回アルゴリズム実技検定
// I問題 --

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
	// cout << fixed << setprecision(16);

	int n;
	cin >> n;
	vector<vector<long long>> a(n+1,vector<long long>(n+1));
	for(long long i=1;i<=n;i++){
		for(long long j=1;j<=n;j++){
			a[i][j] = n*(i-1)+(j-1);
		}
	}

	long long q;
	cin >> q;
	long long s, A, B;
	for(int i=1;i<=q;i++){
		cin >> s;

		if(s==1){
			cin >> A >> B;
			if(A==B) continue;
			for(long long j=1;j<=n;j++){
				swap(a[A][j], a[B][j]);
			}
		}

		if(s==2){
			cin >> A >> B;
			if(A==B) continue;
			for(long long j=1;j<=n;j++){
				swap(a[j][A], a[j][B]);
			}
		}

		if(s==3){
			for(long long j=1;j<=n-1;j++){
				for(long long k=j+1;k<=n;k++){
					swap(a[j][k],a[k][j]);
				}
			}
		}

		if(s==4){
			cin >> A >> B;
			cout << a[A][B] << endl;
		}
	}
}