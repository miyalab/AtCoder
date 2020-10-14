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

    string ans="";
    for(int i=0;i<s.length();i++){
        //cout << s[i] << endl;
        switch(s[i]){
        case '0':
            ans+="0";
            break;

        case '1':
            ans+="1";
            break;

        case 'B':
            if(ans.length()>0) ans.pop_back();
            break;
        }
        //cout << ans << endl;
    }

    cout << ans << endl;
}
