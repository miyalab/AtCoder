#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    string s1=s.substr(0,(s.length()-1)/2);
    string s2=s.substr((3+s.length()-1)/2);
    string rev=s;
    string rev1=s1;
    string rev2=s2;
    reverse(rev.begin(), rev.end());
    reverse(rev1.begin(), rev1.end());
    reverse(rev2.begin(), rev2.end());
    if(s==rev && s1==rev1 && s2==rev2) cout << "Yes" << endl;
    else cout << "No" << endl;
}