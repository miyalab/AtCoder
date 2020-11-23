#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin >> s;
    cin >> t;

    // 文字数チェック
    if(s.length()+1!=t.length()){
        cout << "No" << endl;
        return 0;
    }
    // 文字列一致チェック
    if(s!=t.substr(0,s.length())){
        cout << "No" << endl;
        return 0;
    }
    cout << "Yes" << endl;
    return 0;
}