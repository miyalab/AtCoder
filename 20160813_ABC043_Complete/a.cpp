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
    int sum=0;

    // 1~nまで加算
    for(int i=1;i<=n;i++) sum+=i;
    cout << sum << endl;
}
