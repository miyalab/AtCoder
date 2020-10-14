#include <bits/stdc++.h>

using namespace std;

// 素因数分解
map<long long,long long> prime_factor(long long n) {
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
    long long check=0;
    long long check_cnt=0;
    long long cnt=0;
    for(auto p: prime_factor(n)){
        while(p.second--){
            if(check!=p.first){
                cnt=0;
                int i=1;
                // cout << check_cnt << endl;
                while(check_cnt-i>=0){
                    check_cnt-=i;
                    cnt++;
                    i++;
                }
                ans+=cnt;
                check_cnt=0;
                check=p.first;
            }
            check_cnt++;
            // cout << p.first << " ";
        }
    }
    cnt=0;
    int i=1;
    while(check_cnt-i>=0){
        check_cnt-=i;
        cnt++;
        i++;
    }
    ans+=cnt;
    cout << ans << endl;
}