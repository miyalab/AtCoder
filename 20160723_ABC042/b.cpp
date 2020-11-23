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

	int n,l;
    cin >> n >> l;
    vector<string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];
    sort(s.begin(), s.end());
    for(int i=0;i<n;i++) cout << s[i];
    cout << endl;
}