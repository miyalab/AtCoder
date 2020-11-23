#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a(3);
    for(int i=0;i<3;i++) cin >> a[i];

    int ans=0;
    sort(a.begin(),a.end());
    for(int i=1;i<3;i++){
        ans+=abs(a[i]-a[i-1]);
    }
    cout << ans << endl;
}