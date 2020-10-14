#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b;
    long long v,w;
    long long t;
    cin >> a >> v;
    cin >> b >> w;
    cin >> t;

    if(v>w){
        if((double)abs(a-b)/(v-w)<=t){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}