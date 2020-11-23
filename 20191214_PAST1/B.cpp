// コンパイラオプション
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

// インクルード
#include <iostream>
#include <string>

// 名前空間省略
using namespace std;

// メイン関数
int main()
{
    // 標準入出力　高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	unsigned int n;
	cin >> n;
	
	unsigned long *a = new unsigned long[n];
	for(unsigned int i=0; i<n;i++) cin >> a[i];
	
	for(unsigned int i=1; i<n;i++){
		if(a[i] == a[i-1]) cout << "stay\n";
		else if(a[i] > a[i-1]) cout << "up " << a[i]-a[i-1] << "\n";
		else if(a[i] < a[i-1]) cout << "down " << a[i-1]-a[i] << "\n";
	}
}
