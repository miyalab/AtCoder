#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    
    // データ入力
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    // データ比較
    for(int i=1;i<n;i++){
        if(a[i] == a[i-1])      cout << "stay" << endl;
        else if(a[i] >= a[i-1]) cout << "up " << a[i]-a[i-1] << endl;
        else                    cout << "down " << a[i-1]-a[i] << endl;
    }
}