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

    int n,k,x,y;
    cin >> n >> k >> x >> y;

    int ans=0;
    for(int i=1;i<=n;i++){
        if(i<=k) ans+=x;
        else ans+=y;
    }

    cout << ans << endl;
}
