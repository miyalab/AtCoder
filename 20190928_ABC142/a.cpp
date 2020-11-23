#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(20);
    
    int a=n/2;
    a+=n%2;
    
    cout << (long double)a/n << endl;
}