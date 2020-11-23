#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h, n;
    cin >> h >> n;
    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        h-=a;
    }

    if(h>0) cout << "No" << endl;
    else cout << "Yes" << endl;
}