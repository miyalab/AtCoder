#include <iostream>

using namespace std;

int main()
{
    string s;

    s="Miura Hayato";

    cout << "Angou mae" << endl;
    cout << s << endl;

    char key = 0xab; // 1010 1101
    
    for(int i=0; s[i] != '\0'; i++){
        s[i] = s[i] ^ key;
    }

    cout << "Angou ato" << endl;
    cout << s << endl;

    for(int i=0; s[i] != '\0'; i++){
        s[i] = s[i] ^ key;
    }

    cout << "Hukugou ato" << endl;
    cout << s << endl;
}