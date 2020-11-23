#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;

    cin >> s;

    for(int i=1; s[i-1] != '\0'; i++){
        if(i%2==1){
            if(s[i-1]=='L'){
                cout << "No" << endl;
                return 0;
            }
        }
        if(i%2==0){
            if(s[i-1]=='R'){
                cout << "No" << endl;
                return 0;
            }
        }
    }

    cout << "Yes" << endl;
}