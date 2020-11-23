#include <bits/stdc++.h>

using namespace std;

constexpr long long MOD = 998244353LL;

// MOD考慮power関数
template<typename type>
inline type ModPow(type a, type b)
{
	type ret=1;
	while(b>0){
		if(b&0x1) ret=ret*a%MOD;
		a=a*a%MOD;
		b>>=1;
	}
	return ret;
}

// MOD考慮Combination関数使用準備関数
vector<long long> fac;
vector<long long> finv;
vector<long long> inv;
inline void ModCombiSetup(int size)
{
	fac.resize(size+1);
	finv.resize(size+1);
	inv.resize(size+1);
	fac[0] = fac[1] = 1;
	finv[0] = finv[1] = 1;
	inv[1] = 1;
	for(long long i=2;i<size;i++){
		fac[i]=fac[i-1]*i%MOD;
		inv[i]=MOD-inv[MOD%i]*(MOD/i)%MOD;
		finv[i]=finv[i-1]*inv[i]%MOD;
	}
}

// MOD考慮Combination関数
inline long long ModCombi(long long n, long long r)
{
	if(n==0 && r==0) return 1;
	if(n<r || n<0) return 0;
	return fac[n]*(finv[r]*finv[n-r]%MOD)%MOD;
}

int main()
{
	long long n, m, k;
	cin >> n >> m >> k;

	long long ans=0;
	
	ModCombiSetup(n);

	for(long long i=0;i<=k;i++){
		long long cnt=((m*ModCombi(n-1,i)%MOD)*ModPow(m-1,n-1-i))%MOD;
		ans = (ans+cnt)%MOD;
	}

	cout << ans << endl;
}