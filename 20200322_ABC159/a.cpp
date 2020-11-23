#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    
    int nsum=n*(n-1)/2;
    int msum=m*(m-1)/2;

    cout << nsum+msum << endl;
}