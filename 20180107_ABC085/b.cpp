#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    for(int i=0; i<n;i++) cin >> d[i];
    sort(d.begin(), d.end());

    int ans = n;
    int select = d[0];
    for(int i=1; i<n; i++){
        if(select == d[i]){
            ans--;
        }
        else{
            select = d[i];
        }
    }

    cout << ans << endl;
}