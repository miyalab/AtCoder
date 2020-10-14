#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    long long ans = 1;
    long double check=1;
    for(int i=0;i<n;i++){
        long long a;
        cin >> a;

        check*=a;
        ans*=a;
    }

    if(check>1e18) cout << -1 << endl;
    else cout << ans << endl;
}