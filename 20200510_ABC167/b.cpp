#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a, b, c, k;
	cin >> a >> b >> c >> k;

	int ans=0;

	// +1のカードの枚数だけ引く
	if(a<=k){
		ans+=a;
		k-=a;
	}
	else{
		ans+=k;
		k=0;
	}

	// 0のカードを引く
	k-=b;

	// -1のカードを引く
	if(0<k){
		ans-=k;
	}

	cout << ans << endl;
}