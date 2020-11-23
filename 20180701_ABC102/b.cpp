#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    int amax=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            amax=max(amax,abs(a[i]-a[j]));
        }
    }
    cout << amax << endl;
}