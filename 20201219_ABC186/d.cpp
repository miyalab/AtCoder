#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long i, j;
    long long n;

    cin >> n;

    // データ入力
    vector<long long> a(n);
    for(i=0; i<n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    // 演算
    long long sum = 0;
    long long ans = 0;
    for(i=0; i<n-1; i++){
        sum += a[i];
        ans += a[i+1]*(i+1) - sum;

    }

    cout << ans << endl;
}