// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// メイン関数
int main()
{
    // 標準入出力　高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string w;
    cin >> w;

    vector<int> c(27,0);
    for(int i=0;i<w.length();i++){
        c[w[i]-'a']+=1;
    }
    for(int i=0;i<27;i++){
        if(c[i]%2==1){
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
}
