#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int TotalPoint=0;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        TotalPoint+=a[i];
    }

    sort(a.begin(),a.end());
    
    if(a[n-m]>=(double)TotalPoint/(4*m)) cout << "Yes" << endl;
    else cout << "No" << endl;
}