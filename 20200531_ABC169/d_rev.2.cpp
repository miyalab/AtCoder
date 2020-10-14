#include <bits/stdc++.h>

using namespace std;

// 素因数分解 first:素数 second:指数
map<long long,long long> PrimeFactor(long long n) {
    map<long long,long long> ret;
    for(long long i=2;i*i<=n;i++) {
        while(n%i==0) {
            ret[i]++;
            n/=i;
        }
    }
    if(n!=1) ret[n]=1;
    return ret;
}

int main()
{
    long long n;
    cin >> n;

    long long ans=0;
    for(auto p: PrimeFactor(n)){
        long long i=1;
        while(p.second-i>=0){
            p.second-=i;
            i++;
        }
        ans+=i-1;
    }
    cout << ans << endl;
}