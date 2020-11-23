#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long x;
    cin >> x;

    int year=0;
    unsigned long long money=100;
    while(money<x){
        year++;
        money+=money/100;
    }
    cout << year << endl;
}