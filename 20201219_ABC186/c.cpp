#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ans = n;
    string check;
    stringstream ss;

    for(int i=1; i<=n; i++){
        // 10進数チェック
        check = to_string(i);
        if(check.find('7')!=string::npos){
            ans--;
            continue;
        }

        //　8進数チェック
        ss.str("");
        ss.clear(std::stringstream::goodbit);
        ss << oct << i;
        check = ss.str();
        if(check.find('7')!=string::npos){
            ans--;
            continue;
        }
    }

    cout << ans << endl;
}