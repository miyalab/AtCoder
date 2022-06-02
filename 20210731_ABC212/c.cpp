#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	int n,m;
	cin >> n >> m;

	vector<long long> a(n);
	vector<long long> b(m);
	for(int i=0;i<n;i++) cin >> a[i];
	for(int i=0;i<m;i++) cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	int x=0,y=0;
	long long calc[2];
	long long ans = 1e9;
	while(x<n && y<m){
		ans=min(ans,abs(a[x]-b[y]));
		if(a[x]>b[y]) y++;
		else x++;
	}

	cout << ans << endl;
}