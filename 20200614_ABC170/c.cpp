#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,n;
    cin >> x >> n;
   
    vector<int> p(101,0);
    for(int i=0;i<n;i++){
        int buf;
        cin >> buf;
        p[buf]++;
    }

    int ans=1e8;
    for(int i=-1;i<=101;i++){
        if(0<=i && i<=100){
            if(p[i]>0) continue;
        }
        if(abs(x-ans)>abs(x-i)) ans=i;
    }

    cout << ans << endl;
}