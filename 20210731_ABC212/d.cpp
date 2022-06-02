#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	int q;
	cin >> q;

	int p;
	long long x;
	long long sum = 0;
	priority_queue<long long, vector<long long>, greater<long long>>ball;
	for(int i=0;i<q;i++){
		cin >> p;
		if(p == 1){
			cin >> x;
			ball.push(x-sum);
		}
		else if(p == 2){
			cin >> x;
			sum += x;
		}
		else{
			x = ball.top();
			cout << x + sum << endl;
			ball.pop();
		}
	}
}