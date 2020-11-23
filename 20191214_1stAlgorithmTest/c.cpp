#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> n(6);

    for(int i=0;i<6;i++) cin >> n[i];

    sort(n.begin(),n.end());
    cout << n[3] << endl;
}