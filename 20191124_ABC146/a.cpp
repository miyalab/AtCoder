#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    
    int ans=0;
    if(s=="SUN") ans=7;
    if(s=="MON") ans=6;
    if(s=="TUE") ans=5;
    if(s=="WED") ans=4;
    if(s=="THU") ans=3;
    if(s=="FRI") ans=2;
    if(s=="SAT") ans=1;

    cout << ans << endl;
}