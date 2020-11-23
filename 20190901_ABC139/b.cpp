#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int ans=0;
    int port=1;
    while(port<b){
        ans++;
        port+=a-1;
    }
    cout << ans << endl;
}