#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    char buf;
    string ans;
    
    while(n>0){
        // 26で割り切れるときは上位桁から1つおろす
        if(n%26==0){
            n-=26;
            buf='z';
        }
        // 26進数変換処理
        else buf = (char)'a' + n%26 - 1;
        
        // 文字列の連結
        ans = buf + ans;
        
        // 次の桁にシフト
        n/=26;
    }

    std::cout << ans << std::endl;
}