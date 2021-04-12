#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

    int N, M, Q;
    int s,n,m;
    int point;

    cin >> N >> M >> Q;
    vector<vector<int>> ans(N+1,vector<int>(M+1));

    // クエリ入力
    for(int i=0; i<Q; i++){
        cin >> s;
        if(s==1){
            cin >> n;
            point = 0;
            for(m=1; m<=M; m++){
                if(ans[n][m] == 1){
                    point += N - ans[0][m];
                }
            }
            cout << point << endl;
        }
        else{
            cin >> n >> m;
            ans[n][m] = 1;      // 解答フラグ
            ans[0][m] += 1;     // 解答者数保存
        }
    }
}