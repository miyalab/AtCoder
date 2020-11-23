#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int ab=abs(a-b);
    int bc=abs(b-c);
    int ac=abs(a-c);

    if(ab<=d && bc<=d || ac<=d) cout << "Yes" << endl;
    else cout << "No" << endl;
}