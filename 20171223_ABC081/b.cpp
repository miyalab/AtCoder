#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]%2==1){
            cout << 0 << endl;
            return 0;
        }
        a[i]/=2;
    }

    int cnt = 1;
    while(1){
        for(int i=0;i<n;i++){
            if(a[i]%2==1){
                cout << cnt << endl;
                return 0;
            }
            a[i]/=2;
        }
        cnt++;
    }
}