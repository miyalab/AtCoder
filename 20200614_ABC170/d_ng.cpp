#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    map<int,int> a;
    for(int i=0;i<n;i++){
        int buf;
        cin >> buf;
        a[buf]++;
    }

    int ans=0;
    for(auto p1: a){
        if(p1.second>=2) continue;
        
        bool check=true;
        for(auto p2: a){
            if(p1.first<2*p2.first) break;
            if(p1.first%p2.first==0){
                check=false;
                break;
            }
        }
        
        if(check) ans++;
    }

    cout << ans << endl;
}
