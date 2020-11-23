#include <bits/stdc++.h>
using namespace std;

constexpr long long MOD=998244353LL;

// 文字列⇒整数変換
inline bool StringToInt(string s, int &data)
{
	data=0;
	int sign=1;
	for(int i=0;i<s.length();i++){
		if(i==0 && s[i]=='-'){
            sign=-1;
            continue;
        }
		if('0'<=s[i] && s[i]<='9'){
			data*=10;
			data+=sign*(s[i]-'0');
		}
		else return false;
	}
	return true;
}

// 10進数⇒base進数, digit桁目を取得(0桁目~) 計算量O(N)
template <typename type>
inline type ConvertBaseDigit(type num, type base, type digit)
{
	num/=pow(base,digit); 
    return num%base;
}

// 階乗関数 計算量O(N)
inline long long factorial(long long n)
{
    if(n==0) return 0;
    long long ret=1;
    for(int i=1;i<=n;i++) ret*= i;
    return ret;
}

// べき乗関数 計算量O(log(N))
template<typename type>
inline type Pow(type a, type b)
{
	type ret=1;
	while(b>0){
		if(b&0x1) ret=ret*a;
		a=a*a;
		b>>=1;
	}
	return ret;
}

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

// 素因数分解 first:素数 second:指数
template <typename type>
inline map<type,type> PrimeFactor(type n) {
    map<type,type> ret;
    for(type i=2;i*i<=n;i++) {
        while(n%i==0) {
            ret[i]++;
            n/=i;
        }
    }
    if(n!=1) ret[n]=1;
    return ret;
}

// 約数列挙
template<typename type>
inline vector<type> divisor(type n) 
{
    vector<type> ret;
    for(type i=1; i*i<=n; i++) {
        if(n%i==0) {
        ret.push_back(i);
        if(i*i!=n) ret.push_back(n/i);
        }
    }
    sort(ret.begin(), ret.end());
    return ret;
}