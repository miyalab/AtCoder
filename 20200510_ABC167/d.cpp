#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n, k;
	cin >> n >> k;

	vector<int> a(n);
	for(long long i=0;i<n;i++){
		cin >> a[i];
		a[i]-=1;
	}

	// 探索準備
	int select=0;					// 探索場所
	vector<bool> check(n,false);	// 訪れているかチェック
	int loopcnt=0;					// ループ内のステップ数
	int start=-1;					// ループ開始場所

	for(long long i=1;i<=k;i++){
		// ステップ数カウント
		if(start != -1){
			loopcnt++;
			if(start==select){
				// ループ分だけ省略
				k=(k-i)%loopcnt+i;
			}
		}
		
		// loop開始場所登録
		if(start == -1 && check[select]) start=select;
		else check[select] = true;

		// 次の町へ移動
		select = a[select];
	}
	
	cout << select+1 << endl;
}