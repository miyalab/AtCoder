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
    for(int i=0;i<n;i++) cin >> a[i];

    for(int i=0;i<k;i++){
        int inc=0;
        vector<int> buf(n,0);
        for(int j=0;j<n;j++){
            int c_max = min(n-1,j+a[j]);
            int c_min = max(0,  j-a[j]);
            if(c_max==n-1 && c_min==0){
                inc++;
                continue;
            }
            else{
                if(inc){
                    for(int k=0;k<n;k++){
                        buf[k]+=inc;
                    }
                    inc=0;
                }
                for(int k=c_min;k<=c_max;k++) buf[k]++;
            }
        }
        if(a!=buf) a=buf;
        else break;
    }

    cout << a[0];
    for(int i=1;i<n;i++) cout << " " << a[i];
    cout << endl;
}