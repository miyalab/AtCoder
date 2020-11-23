#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,x;
    cin >> n >> x;

    int mmin=1e9;
    for(int i=0;i<n;i++){
        int m;
        cin >> m;
        x-=m;
        mmin=min(mmin,m);
    }
    cout << n+x/mmin << endl;
}