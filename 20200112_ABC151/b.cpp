#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, m;
    cin >> n >> k >> m;
    int TotalPoint=0;
    
    int a;
    for(int i=0;i<n-1;i++){
        cin >> a;
        TotalPoint+=a;
    }
    a = n * m - TotalPoint;
    if(a<0) a=0;
    if(a<=k) cout << a << endl;
    else cout << "-1" << endl;
}