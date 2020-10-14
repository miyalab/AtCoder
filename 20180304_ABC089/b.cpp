#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<char,int> check;
    for(int i=0;i<n;i++){
        char s;
        cin >> s;
        check[s]++;
    }
    if(check.size()==3) cout << "Three" << endl;
    else cout << "Four" << endl;
}