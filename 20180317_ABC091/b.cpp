#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    map<string,int> check;
    
    cin >> n;
    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        check[s]++;
    }
    
    cin >> m;
    for(int i=0;i<m;i++){
        string t;
        cin >> t;
        check[t]--;
    }

    int ans=0;
    for(auto m: check){
        if(ans<m.second) ans=m.second;
    }

    cout << ans << endl;
}