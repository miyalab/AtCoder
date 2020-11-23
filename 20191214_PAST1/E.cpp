// コンパイラオプション
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

// インクルード
#include <iostream>
#include <string>
#include <vector>

// 名前空間省略
using namespace std;

// メイン関数
int main()
{
    // 標準入出力　高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    string *user = new string[n];
    for(int i=0;i<n;i++) user[0] += "N";
    for(int i=1;i<n;i++) user[i] = user[0];
    
    int x,y,z;
    for(int i=0;i<q;i++){
        //for(int z=0;z<n;z++) cout << user[z] << "\n";
        cin >> x;
        if(x == 1){
            cin >> y >> z;
            user[y-1][z-1] = 'Y';
        }
        else if(x == 2){
            cin >> y;
            string buf = user[y-1];
            for(int j=0;j<n;j++){
                if(user[j][y-1]=='Y') buf[j] = 'Y';
            }
            user[y-1] = buf;
        }
        else{
            cin >> y;
            string buf = user[y-1];
            for(int j=0;j<n;j++){
                if(user[y-1][j]=='Y'){
                    for(int k=0;k<n;k++){
                        if(user[j][k]=='Y') buf[k] = 'Y';
                    }
                }
            }
            user[y-1] = buf;
        }
    }

    for(int i=0;i<n;i++) user[i][i] = 'N';

    for(int i=0;i<n;i++) cout << user[i] << "\n";
}
