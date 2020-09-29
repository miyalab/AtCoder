#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    cin >> str;
    
    if(str[str.length()-1]=='s') str+="es";
    else str+="s";
    
    cout << str << endl;
}
