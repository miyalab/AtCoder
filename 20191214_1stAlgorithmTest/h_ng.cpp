#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::cin.tie(nullptr);
    std::ios_base::sync_with_stdio(false);
    
    long long n;
    cin >> n;

    vector<long long> c(n);
    
    long long min2 = 2000000000 , min3 = 2000000000;

    for(long long i=1;i<=n;i++){
        cin >> c[i-1];
        if(c[i-1] < min3) min3 = c[i-1];
        if(i%2==1 && c[i-1] < min2) min2 = c[i-1];
    }

    long long q;
    cin >> q;

    long long s, x, a;
    unsigned long long cnt=0;

    for(long long i=0;i<q;i++){
        // cout << "no." << i << endl;
        cin >> s;

        if(s==1){
            cin >> x >> a;
            if(a <= c[x-1]){
                c[x-1]-=a;
                cnt += a;
                if(c[x-1] < min3) min3 = c[x-1];
                if(x%2==1 && c[x-1] < min2) min2 = c[x-1];
            }
        }
        else if(s==2){
            cin >> a;
            // bool flag = true;

            // for(int j=1;j<=n;j+=2){
            //     if(c[j-1]<a){
            //         flag = false;
            //         break;
            //     }
            // }
            // if(flag == true){
            if(a <= min2){
                for(long long j=1;j<=n;j+=2){
                    c[j-1] -= a;
                    // cnt+=a;
                }
                cnt += (long long)a*n/2;
                min2 -= a;
                if(min2 < min3) min3 = min2;
            }
        }
        else{
            cin >> a;
            // bool flag = true;

            // for(int j=1;j<=n;j++){
            //     if(c[j-1]<a){
            //         flag = false;
            //         break;
            //     }
            // }
            // if(flag == true){
            if(a <= min3){
                for(long long j=1;j<=n;j++){
                    c[j-1] -= a;
                    // cnt+=a;
                }
                cnt+=(long long)a*n;
                min2 -= a;
                min3 -= a;
            }
        }
        // for(int z=0;z<n;z++) cout << c[z] << "  ";
        // cout << ":" << cnt << endl;

    }
    
    cout << cnt << endl;
}