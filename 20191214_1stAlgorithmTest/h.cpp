#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);
	
	long long n;
	cin >> n;
	vector<long long> c(n);
	
	// 各クエリ用最小値
	long long min2 = 2000000000, min3 = 2000000000;

	// カード枚数入力
	for(long long i=1;i<=n;i++){
		cin >> c[i-1];

		// 各クエリ最小値更新
		if(c[i-1] < min3) min3 = c[i-1];
		if(i%2==1 && c[i-1] < min2) min2 = c[i-1];
	}

	long long q;
	cin >> q;
	long long s, x, a;

	// 各クエリカウント数
	unsigned long long cnt=0;
	unsigned long long cnt2=0,cnt3=0;

	for(long long i=0;i<q;i++){
		cin >> s;

		// カードxをa枚販売
		if(s==1){
			cin >> x >> a;
			// 販売可能判定（偶数）
			if((x%2==0) && a <= c[x-1]-cnt3){
				c[x-1]-=a;

				// 販売数カウント
				cnt += a;
				
				// 各クエリ用最小値更新
				if(c[x-1]-cnt3 < min3) min3 = c[x-1]-cnt3;
			}
			// 販売可能判定（奇数）
			if((x%2==1) && a <= c[x-1]-cnt3-cnt2){
				c[x-1]-=a;

				// 販売数カウント
				cnt += a;
				
				// 各クエリ用最小値更新
				if(c[x-1]-cnt3-cnt2 < min3) min3 = c[x-1]-cnt3-cnt2;
				if(c[x-1]-cnt3-cnt2 < min2) min2 = c[x-1]-cnt3-cnt2;
			}
		}
		// 奇数カードをa枚販売
		else if(s==2){
			cin >> a;
			// 販売可能判定
			if(a <= min2){
				// 販売数カウント
				cnt2+=a;
				if(n%2==1) cnt += (long long)a*(n/2+1);
				else cnt += (long long)a*(n/2);

				// 各クエリ用最小値更新
				min2 -= a;
				if(min2 < min3) min3 = min2;
			}
		}
		// すべてのカードをa枚販売
		else{
			cin >> a;
			// 販売可能判定
			if(a <= min3){
				// 販売数カウント
				cnt3+=a;
				cnt+=(long long)a*n;

				// 各クエリ用最小値更新
				min2 -= a;
				min3 -= a;
			}
		}

		// デバッグ用
		// for(int z=0;z<n;z++) cout << c[z] << "  ";
		// cout << ":" << min2 << ":" << min3 << ":" << cnt << endl;
	}
	cout << cnt << endl;
}