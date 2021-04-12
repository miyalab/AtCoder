#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	//cout << fixed << setprecision(16);

    int n, m;
    cin >> n >> m;

    int i, j;
    int a;
    vector<int> food(n);
    for(i=0; i<m; i++){
        cin >> a;
        for(j=0; j<n; j++){
            if(food[j] < a){
                cout << j + 1 << endl;
                food[j] = a;
                break;
            }
        }
        if(j==n) cout << -1 << endl;
    }
}