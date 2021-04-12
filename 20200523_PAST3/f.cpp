/*
手法
データ入力，
各行の文字データをソート
1行目，n行目に同じ文字があるか探索，ないときは回文不可，ある時は，ansにその文字を連結
2行目，n-1行目に同じ文字があるか探索...
ansの反転データを取得する→ans_rev
Nが奇数のときは，真ん中の行から適当にansに連結
ansにans_revを連結
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

    int n;
    cin >> n;
    vector<string> a(n+1);

    int i, j, k;
    for(i=1; i<=n; i++) cin >> a[i];
    
    // 各行を文字順にソート
    for(i=1; i<=n; i++){
        sort(a[i].begin(), a[i].end());
    }

    //for(i=1; i<=n; i++) cout << a[i] << endl;

    // 回文探索
    bool check = false;
    string ans = "";
    string ans_rev = "";
    for(i=1; i<=n/2; i++){
        check = false;
        for(j=0; j<n; j++){
            for(k=0; k<n; k++){
                if(a[i][j] == a[n-i+1][k]){
                    ans += a[i][j];
                    check = true;
                    break;
                }
                else if(a[i][j] <= a[n-i+1][k]){
                    break;
                }
            }        
            if(check == true) break;
        }
        if(check == false){
            cout << -1 << endl;
            return 0;
        }
    }

    ans_rev = ans;
    reverse(ans_rev.begin(), ans_rev.end());
    if(n%2==1) ans += a[n/2 + 1][0];            // Nが奇数の時に荷は，真ん中の行の1文字だけ抽出
    ans += ans_rev;

    cout << ans << endl;
    return 0;
}