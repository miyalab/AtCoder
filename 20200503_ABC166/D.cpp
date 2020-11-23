#include <iostream>
#include <string>
#include <vector>

using namespace std;

long long power_5(long a)
{
    long long x=1;
    for(int i=0;i<5;i++){
        x*=a;
    }
    int
    return x;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cout << "int:" << sizeof(int) << "\n";
    cout << "long:" << sizeof(long) << "\n";
    cout << "long int:" << sizeof(long int) << "\n";
    cout << "long long:" << sizeof(long long) << "\n";
    cout << "long long long" << sizeof(long long long) << "\n";
    
    // long a=0, b=0;
    // long x;

    // cin >> x;

    // long long a5, b5;
    // do{
    //     a5 = power_5(a);
    //     b5 = power_5(b);

    //     if(a5 - b5 < x){
            
    //     }

    // }while(a5-b5!=x);

    // cout << a << " " << b << "\n";
}