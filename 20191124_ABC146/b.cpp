#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    for(int i=0;i<s.length();i++){
        if(s[i]+n>'Z'){
            s[i]='A'-1+n-('Z'-s[i]);
        }
        else{
            s[i]+=n;
        }
    }
    cout << s << endl;
}