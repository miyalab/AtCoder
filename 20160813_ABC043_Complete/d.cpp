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

    string s;
    cin >> s;

    // 部分文字列検索 2-3文字列だけ検索すればよい
    for(int i=0;i<s.length()-1;i++){
        if(s[i]==s[i+1]){
            cout << i+1 << " " << i+2 << endl;
            return 0;
        }
        if(s[i]==s[i+2]){
            cout << i+1 << " " << i+3 << endl;
            return 0;
        }
    }

    cout << "-1 -1" << endl;
}
