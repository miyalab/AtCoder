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

    int a,b;
    cin >> a >> b;

    int cnt=0;
    while(a!=b){
        cnt++;
        if(abs(a-b)>=8){
            if(a<b) a+=10;
            else a-=10;   
        }
        else if(abs(a-b)>=3){
            if(a<b) a+=5;
            else a-=5;
        }
        else{
            if(a<b) a+=1;
            else a-=1;
        }
    }

    cout << cnt << endl;
}
