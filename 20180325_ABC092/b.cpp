#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,x;
    cin >> n >> d >> x;

    int ans=0;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        ans += (d-1)/a+1;
    }
    cout << ans+x << endl;
}