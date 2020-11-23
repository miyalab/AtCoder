#include <bits/stdc++.h>

using namespace std;

int main()
{
    int H,W,h,w;
    cin >> H >> W;
    cin >> h >> w;
    cout << H*W-(h*W+H*w-h*w) << endl;
}