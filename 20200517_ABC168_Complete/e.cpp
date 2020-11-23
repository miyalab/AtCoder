#include <bits/stdc++.h>

using namespace std;

constexpr auto MOD=1000000007LL;

// MOD考慮power関数
inline long long modpow(long long a,long long n)
{
	long long ret=1;
	for(long long i=0;i<n;i++){
		ret*=a;
		ret%=MOD;
	}
	return ret;
}

int main(){
	int n;
	cin>>n;
	long long zero = 0;
	map<pair<long long, long long>,vector<int>> bad;
	while(n--){
		long long x,y;
		cin >> x >> y;

		// 両方0ならカウントしてcontinue
		if(x==0 && y==0){
			zero++;
			continue;
		}
		
		// 既約分数計算
		long long g = gcd(x, y);
		x /= g;
		y /= g;
		
		// 符号情報を統一
		if(y < 0) x = -x, y = -y;
		if(y==0 && x<0) x = -x, y = -y;
		
		int rotate90 = (x <= 0);
		if(rotate90){ 
			swap(x, y);
			y = -y;
		}

		if(bad.count({x, y}) == 0) bad[{x,y}] = {0, 0};
		bad[{x, y}][rotate90]++;
	}

	// 組み合わせ計算
	long long ans = 1;
	for(auto x:bad){
		vector<int> c = x.second;
		ans *= (modpow(2, c[0]) - 1) + (modpow(2, c[1]) - 1) + 1;
		ans %= MOD;
	}

	ans += zero - 1;
	ans = (ans + MOD) % MOD;
	cout<< ans <<endl;
}
