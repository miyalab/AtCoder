#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> p(n);
    for(int i=0;i<n;i++) cin >> p[i];
    
    vector<int> ps=p;
    sort(ps.begin(),ps.end());
    
    int cnt=0;
    for(int i=0;i<n;i++){
        if(p[i]!=ps[i]){
            cnt++;
            if(cnt>2){
                cout << "NO" << endl;
                return 0;
            }
        }
    }

    cout << "YES" << endl;
}