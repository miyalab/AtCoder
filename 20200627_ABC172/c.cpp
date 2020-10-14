#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    long long k;
    cin >> n >> m >> k;

    vector<int> a(n+1);
    vector<int> b(m+1);

    long long time = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        time += a[i];
    }
    for(int i=1;i<=m;i++){
        cin >> b[i];
        time += b[i];
    }
    a[0]=0;
    b[0]=0;
    
    while(time > k){
        if(a[n-1]>=b[m-1] && n>0){
            time-=a[n-1];
            n--;
        }
        else if(m>0){
            time-=b[m-1];
            m--;
        }
        else break;
    }

    cout << n+m << endl;
}