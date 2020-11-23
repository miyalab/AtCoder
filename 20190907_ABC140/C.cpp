#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;

    // データ長
    cin >> n;
    
    // 動的配列
    unsigned int *b = new unsigned int[n+1];

    // データセット
    for(int i=1; i<=n - 1; i++) cin >> b[i];

    // ダミーデータ
    b[0] = 100000;
    b[n] = 100000;

    unsigned long ans = 0;

    for(int i=1; i<=n; i++){
        ans += min(b[i-1],b[i]);
    }
    
    cout << ans << endl;

}