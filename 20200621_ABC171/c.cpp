#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    char buf;
    string ans;
    
    while(n>0){
        if(n%26==0){
            n-=26;
            buf='z';
        }
        else buf = (char)'a' + n%26 - 1;
        ans = buf + ans;
        n/=26;
    }

    std::cout << ans << std::endl;
}