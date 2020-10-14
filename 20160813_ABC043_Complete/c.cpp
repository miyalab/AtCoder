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

    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int ans=(1<<30);

    // -100 ~ 100まで全探索
    for(int i=-100;i<=100;i++){
        int sum=0;

        // コスト計算
        for(int j=0;j<n;j++){
            sum += (a[j]-i)*(a[j]-i);
        }

        // 最小値を保存
        ans = min(ans,sum);
    }

    cout << ans << endl;
}
