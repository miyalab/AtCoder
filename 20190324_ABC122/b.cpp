#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int smax=0;
    for(int i=0;i<s.length();i++){
        if(s[i]!='A' && s[i]!='C' && s[i]!='G' && s[i]!='T') continue;
        
        bool check=false;
        for(int j=i;j<s.length();j++){
            if(s[j]!='A' && s[j]!='C' && s[j]!='G' && s[j]!='T'){
                smax=max(smax,j-i);
                check=true;
                break;
            }
        }
        if(!check){
            smax=max(smax,(int)s.length()-i);
        }
    }

    cout << smax << endl;
}