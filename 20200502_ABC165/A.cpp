#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a,b,k;

    cin >> k;
    cin >> a >> b;

    int x, y;
    x = b % k;
    y = a + x;

    if(y <= b) cout << "OK" << endl;
    else cout << "NG" << endl;
}