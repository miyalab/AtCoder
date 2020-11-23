#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    vector<string> s(n);
    for(int i=0;i<n;i++) cin >> s[i];

    // 最下部から探索
    for(int i=n-1;i>0;i--){
        // X箇所探索
        for(int j=0; j<s[i].length(); j++){
            if(s[i][j] == 'X'){
                if(s[i-1][j-1] == '#' && j!=0){
                    s[i-1][j-1] = 'X';
                }
                if(s[i-1][j]   == '#'){
                    s[i-1][j]   = 'X';
                }
                if(s[i-1][j+1] == '#' && j!=s[i].length()-1){
                    s[i-1][j+1] = 'X';
                }
            }
        }
    }

    for(int i=0;i<n;i++) cout << s[i] << endl;
}