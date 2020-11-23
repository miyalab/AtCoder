// コンパイラオプション
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

// インクルード
#include <iostream>
#include <string>
#include <stdexcept>

// 名前空間省略
using namespace std;

// 文字列に数字しかないかチェック
inline bool StrCheckNum(string str)
{
    int i=0;
    while(str[i] != '\0'){
        if('0' <= str[i] && str[i] <= '9') i++;
        else return false;
    }

    return true;
}

// メイン関数
int main()
{
    // 標準入出力　高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;
    
    if(StrCheckNum(str)==true){
        int num = std::stoi(str);
        cout << num * 2 << "\n";
    }
    else{
       cout << "error\n";
    }
}
