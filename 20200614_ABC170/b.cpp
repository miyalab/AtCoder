#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;

    for(int i=0;i<=x;i++){
        int check=0;
        check+=2*i;
        check+=4*(x-i);
        if(check==y){
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}