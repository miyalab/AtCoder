#include <iostream>

using namespace std;

int main()
{
    unsigned long sum = 0;
    unsigned int n,a,b;

    cin >> n;
    cin >> a;
    cin >> b;

    if(a*n < b){
        cout << a*n;
    }
    else{
        cout << b;
    }
}