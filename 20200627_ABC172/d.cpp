#include <bits/stdc++.h>

using namespace std;

// 約数列挙
template<typename type>
inline vector<type> divisor(type n) 
{
    vector<type> ret;
    for(type i=1; i*i<=n; i++) {
        if(n%i==0) {
        ret.push_back(i);
        if(i*i!=n) ret.push_back(n/i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}

// 素因数分解 first:素数 second:指数
template <typename type>
inline map<type,type> PrimeFactor(type n) {
    map<type,type> ret;
    for(type i=2;i*i<=n;i++) {
        while(n%i==0) {
            ret[i]++;
            n/=i;
        }
    }
    if(n!=1) ret[n]=1;
    return ret;
}


inline int divisor1(int n) 
{
    int ret=0;
    for(int i=1; i*i<=n; i++) {
        if(n%i==0) {
            ret++;
            if(i*i!=n) ret++;
        }
    }
    return ret;
}

int main()
{
    int n;
    cin >> n;

    long long ans=0;
    for(int k=1;k<=n;k++){
        // long long buf=1;
        // for(auto p: PrimeFactor(k)){
        //     buf*=p.second+1;
        // }
        // ans+=k*buf;
        ans+=(long long)k*divisor1(k);
    }

    cout << ans << endl;
}