#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int work;
    int check;
    long sum = 0;
    for(int i=1;i<=n;i++){
        work = i;
        check = work % 10;
        work /= 10;
        check += work % 10;
        work /= 10;
        check += work % 10;
        work /= 10;
        check += work % 10;
        work /= 10;
        check += work % 10;
        if(a <= check && check <= b) {
            sum += i;
        }
    }

    cout << sum << endl;
}