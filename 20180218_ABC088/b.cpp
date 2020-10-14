#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];
    
    int ans=0;
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(int i=0;i<n/2;i++){
        ans+=a[2*i]-a[2*i+1];
    }
    if(a.size()%2) ans+=a[a.size()-1];
    
    cout << ans << endl;

}