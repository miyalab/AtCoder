#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    int d;
    int x[10][10];
    int cnt = 0;
    int buf1,buf2;

    cin >> n;
    cin >> d;

    for(int i=0;i<n;i++){
        for(int j=0;j<d;j++){
            cin >> x[i][j];
        }
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            buf1 = 0;
            for(int k=0;k<d;k++){
                buf2 = x[i][k] - x[j][k];
                buf1 += buf2 * buf2;
            }

            if(sqrt(buf1) == (int)sqrt(buf1)) {
                cnt++;
            }
        }
    }

    cout << cnt;
}