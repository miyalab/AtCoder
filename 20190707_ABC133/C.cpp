#include <iostream>

using namespace std;

int main()
{
    const unsigned long long CONSTANT = 2019;
    unsigned long long l,r;
    unsigned long long min = CONSTANT - 1;

    cin >> l >> r;
    
    for(long long i=l; i<=r-1; i++){
        for(long long j=i+1; j<=r; j++){
            if(min > ((i*j)%CONSTANT)) {
                min =(i*j)%CONSTANT;
                if(min == 0){
                    cout << 0 << endl;
                    return 0;
                }
            }
        }
    }

    cout << min << endl;
}