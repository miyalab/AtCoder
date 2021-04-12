#include <bits/stdc++.h>

using namespace std;

// int main()
// {
//     long a,r,n;
//     cin >> a >> r >> n;

//     long ans = a;
//     double dans = a;

//     for(int i=1;i<n;i++){
//         ans *= r;
//         dans *= r;
//     }

//     if(dans <= 1e9) cout << ans << endl;
//     else cout << "large" << endl;
// }

int main()
{
    // 表示精度変更
	cout << fixed << setprecision(0);

    long a,r,n;
    cin >> a >> r >> n;

    double ans;
    ans = powf(r,n-1);
    ans *= a;
    if(ans <= 1e9) cout << round(ans) << endl;      // 数値を丸めて表示
    else cout << "large" << endl;                   // 範囲外
}