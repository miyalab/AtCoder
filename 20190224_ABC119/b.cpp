#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    long double ans=0;
    for(int i=0;i<n;i++){
        long double x;
        string u;
        cin >> x >> u;

        if(u=="BTC") x*=380000;
        ans+=x;
    }
    cout << ans << endl;
}