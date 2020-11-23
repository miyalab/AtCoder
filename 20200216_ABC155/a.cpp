#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    
    bool check=true;
    if(a==b && b==c) check=false;
    if(a!=b && b!=c && c!=a) check=false;

    if(check) cout << "Yes" << endl;
    else cout << "No" << endl;
}