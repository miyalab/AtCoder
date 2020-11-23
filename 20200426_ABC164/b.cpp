#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int select=0;
    while(a>0 && c>0){
        if(select == 0){
            select=1;
            c-=b;
        }
        else{
            select=0;
            a-=d;
        }
    }
    if(a<=0) cout << "No" << endl;
    else cout << "Yes" << endl;
}