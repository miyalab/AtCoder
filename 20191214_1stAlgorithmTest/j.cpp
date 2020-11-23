#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() 
{ 
	ios::sync_with_stdio(0);
	cin.tie(0);

    int h,w;
    cin >> h >> w;

    vector<vector<int>> a(h,vector<int>(w));

    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            cin >> a[i][j];
        }
    }
}