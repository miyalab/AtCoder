#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    int n,k;
    cin >> n >> k;

    vector<int> a(n);
    vector<vector<bool>> check(n,vector<bool
    >(n,false));
    for(int i=0;i<n;i++){
        cin >> a[i];
        int c_max = min(n-1,i+a[i]);
        int c_min = max(0,  i-a[i]);
        for(int j=c_min;j<=c_max;j++){
            check[i][j]=true;
            check[j][i]=true;
        }
    }
    for(int i=0;i<k;i++){
        
    }

    cout << a[0];
    for(int i=1;i<n;i++) cout << " " << a[i];
    cout << endl;
}