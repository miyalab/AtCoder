#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    cin >> s;

    int cnt=0;

    for(int i=0;i<s.length()-2;i++){
        if(s.substr(i,3)=="ABC"){
            cnt+=1;
        }
    }
    cout << cnt << endl;
}