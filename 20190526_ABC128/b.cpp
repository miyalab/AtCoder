#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    pair<pair<string,int>,int> p[101];
    for(int i=0;i<n;i++){
        string name;
        int score;
        cin >> name >> score;
        p[i]=make_pair(make_pair(name,-score),i+1);
    }
    sort(p,p+n);
    for(int i=0;i<n;i++) cout << p[i].second << endl;
}