#include <iostream>

using namespace std;

int main()
{
    int n;

    // 料理数
    cin >> n;

    // 動的配列
    int *a = new int[n + 1];
    int *b = new int[n + 1];
    int *c = new int[n];
    
    // 食事順番および食事の満足度
    for(int i=1; i<=n; i++) cin >> a[i];
    for(int i=1; i<=n; i++) cin >> b[i];
    for(int i=1; i<=n - 1; i++) cin >> c[i];

    // ダミーデータ
    a[0] = -1;

    // 満足度
    unsigned int ans = 0;

    // 演算
    for(int i=1; i<=n; i++){
        if(a[i] - a[i-1] == 1) ans += c[a[i-1]];
        ans += b[i];
    }

    cout << ans << endl;
}