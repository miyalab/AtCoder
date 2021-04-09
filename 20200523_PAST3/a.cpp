#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;

    if (s==t) {
        cout << "same" << endl;
    }
    else{
        // 小文字を大文字に変換
        transform(s.begin(),s.end(),s.begin(),::toupper);
        transform(t.begin(),t.end(),t.begin(),::toupper);
        
        if(s==t){
            cout << "case-insensitive" << endl;
        }
        else{
            cout << "different" << endl;
        }
    }
}