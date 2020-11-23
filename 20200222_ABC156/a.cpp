#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,r;
    cin >> n >> r;

    if(10>n) r+=100*(10-n);
    cout << r << endl;
}