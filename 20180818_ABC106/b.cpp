#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans=0;
    for(int i=9;i<=n;i+=2){
        int cnt=0;
        for(int j=1;j<=i;j++){
            if(i%j==0) cnt++;
            if(cnt>8) break;
        }
        if(cnt==8) ans++;
        cnt=0;
    }

    cout << ans << endl;
}