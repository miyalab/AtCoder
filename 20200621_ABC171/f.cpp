#include <bits/stdc++.h>

using namespace std;

constexpr long long MOD = 1e9+7;

// MOD考慮べき乗関数 計算量O(log(N))
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

// メモ化MOD考慮Combination関数使用準備関数 計算量O(N)
vector<long long> fac, finv, inv;
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

// メモ化MOD考慮Combination関数 計算量O(1)
inline long long ModCombi(long long n, long long r)
{
	if(n==0 && r==0) return 1;
	if(n<r || n<0) return 0;
	return fac[n]*(finv[r]*finv[n-r]%MOD)%MOD;
}

int main()
{
    int k;
    string s;
    cin >> k;
    cin >> s;

    long long ans=0;

    // 計算用
    // AtCoderのGCCコンパイラでは、
    // 関数の引数などでs.length()を用いるとunsignedとなりCEとなる場合がある。
    long long s_length    = s.length();
    long long word_length = s.length()+k;
    ModCombiSetup(word_length);

    // メイン処理
    for(long long i=s_length; i<=word_length; i++){
        long long t = ModCombi(i-1, s_length-1);
        t = t * ModPow(25ll, i-s_length) % MOD;
        t = t * ModPow(26ll, word_length-i) % MOD;
        ans = (ans+t) % MOD;
    }

    cout << ans << endl;
}