#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;

    cin >> s >> t;

    int x, y;
    // 1F~9F
    if('0'<=s[0] && s[0]<='9'){
        x = s[0] - '0' - 1;
    }
    // B1~B9
    else{
        x = -(s[1] - '0');
    }

    // 1F~9F
    if('0'<=t[0] && t[0]<='9'){
        y = t[0] - '0' - 1;
    }
    // B1~B9
    else{
        y = -(t[1] - '0');
    }

    cout << abs(x-y) << endl;
    
}