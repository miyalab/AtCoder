/*
5e5 x 5e5 の行列の用意は不可（時間内に終了しない）
手法
データ入力
行番号データ(1次元配列row)と列番号データ(1次元配列col)を用意
クエリ3 転置されたか保存⇒t
クエリ1 転置なし 列データをswap
　　　　転置あり 行データをswap
クエリ2 転置なし 行データをswap
　　　　転置あり 列データをswap
クエリ4 転置あり n * (col[a] - 1) * row[b] - 1
　　　　　　　　 n * (col[b] - 1) * row[a] - 1 
*/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	//cout << fixed << setprecision(16);

    int n, q;
    cin >> n >> q;

    vector<int> row(n+1);    // 行
    vector<int> col(n+1);    // 列
    for(int i=0; i<=n; i++) col[i] = row[i] = i;

    int qn, a, b;
    bool t = false;
    for(int i=0; i < q; i++){
        cin >> qn;
        if(qn == 1){
            cin >> a >> b;
            if(a == b) continue;
            if(t == false) swap(col[a], col[b]);
            else swap(row[a], row[b]);
        }
        else if(qn == 2){
            cin >> a >> b;
            if(a == b) continue;
            if(t == false) swap(row[a], row[b]);
            else swap(col[a], col[b]);
        }
        else if(qn == 3) t = !t;
        else{
            cin >> a >> b;
            if(t == false) cout << (long long)n * (col[a] - 1) + row[b] - 1 << endl;
            else cout << (long long)n * (col[b] - 1) + row[a] - 1 << endl;
        }
    }
}