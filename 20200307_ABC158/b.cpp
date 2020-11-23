#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a, b;
    cin >> n >> a >> b;
    
    long long ans=n/(a+b)*a;    // 計算順番注意
    n%=(a+b);
    if(n<a) ans+=n;
    else ans+=a;
    cout << ans << endl;
}