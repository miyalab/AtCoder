#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    if(s == "Sunny") cout << "Cloudy" << endl;
    if(s == "Cloudy") cout << "Rainy" << endl;
    if(s == "Rainy") cout << "Sunny" << endl;
}