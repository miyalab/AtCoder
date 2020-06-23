#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    unsigned int buf=0;
    vector<unsigned int> a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
        buf = buf ^ a[i];               // すべてのXORを算出
    }

    cout << (buf ^ a[0]);
    for(int i=1;i<n;i++){
        cout << " " << (buf ^ a[i]);    // もう一度、XOR計算して除外
    }
    cout << endl;
}