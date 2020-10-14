#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;

    int ans=0;
    for(int i=a;i<=b;i++){
        string num = to_string(i);
        string rev = num;
        reverse(rev.begin(),rev.end());
        if(rev==num) ans++;
    }
    cout << ans << endl;
}