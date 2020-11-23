#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s=to_string(n);
    int div=0;
    for(int i=0;i<s.length();i++){
        div+=s[i]-'0';
    }
    if(n%div) cout << "No" << endl;
    else cout << "Yes" << endl;
}