#include <bits/stdc++.h>

using namespace std;

int main()
{
  int r,p,q;
  cin >> r >> p >> q;
  int a=r+p;
  int b=p+q;
  int c=q+r;
  cout << min({a,b,c}) << endl;
}
