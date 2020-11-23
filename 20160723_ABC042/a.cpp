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

    int a;
    int b=0, c=0;
	for(int i=0;i<3;i++){
        cin >> a;
        if(a==5) b++;
        if(a==7) c++;
    }

    if(b==2 && c==1) cout << "YES" << endl;
    else cout << "NO" << endl;
}