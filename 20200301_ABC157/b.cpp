#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> a(9);
    for(int i=0;i<9;i++) cin >> a[i];

    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int b;
        cin >> b;
        for(int i=0;i<9;i++){
            if(a[i]==b) a[i]=0;
        }
    }

    for(int i=0;i<3;i++){
        if(!a[3*i] && !a[1+3*i] && !a[2+3*i]){
            cout << "Yes" << endl;
            return 0;
        }
        if(!a[i] && !a[i+3] && !a[i+6]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    if(!a[2] && !a[4] && !a[6]){
       cout << "Yes" << endl;
       return 0;
    }
    if(!a[0] && !a[4] && !a[8]){
       cout << "Yes" << endl;
       return 0;
    }
    cout << "No" << endl;
}