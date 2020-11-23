#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int a=0, b=0, c=0;
    
    cin >> s;

    // a,b,c数カウント
    for(int i=0;i<s.length();i++){
        if(s[i]=='a'){
            a++;
        }
        if(s[i]=='b'){
            b++;
        }
        if(s[i]=='c'){
            c++;
        }
    }

    if(a>b && a>c) cout << "a" << endl;
    if(b>a && b>c) cout << "b" << endl;
    if(c>a && c>b) cout << "c" << endl;
}