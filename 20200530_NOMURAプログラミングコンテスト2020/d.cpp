#include <bits/stdc++.h>

using namespace std;

constexpr long long MOD = 1e9+7;

struct tree{
	vector<long long> node;
};

int main()
{
	// 入出力関連設定
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout << fixed << setprecision(20);

	long long n;
	cin >> n;

	vector<long long> unplan;
	vector<tree> check(n+1);
	for(long long i=1;i<=n;i++){
		long long p;
		cin >> p;
		if(p!=-1){
			if(i<p) check[i].node.push_back(p);
			else check[p].node.push_back(i);
		}
		else{
			unplan.push_back(i);
		}
	}
	
	long long ans=0;
	for(long long i=1;i<=check.size();i++){
		cout << check[i].node.size() << endl;
		ans=(ans+check[i].node.size())%MOD;
	}
	cout << ans << endl;

	for(long long i=0;i<unplan.size();i++){
		// unplanの町の前の番号にunplanの町番号が含まれているか探索
		long long buf=0;
		for(int j=1;j<unplan[i];j++){
			auto result = find(check[j].node.begin(),check[j].node.end(),unplan[i]);
			if(result!=check[j].node.end()){
				buf=(buf+1)%MOD;
				continue;
			}
		}

		// unplanの町で作られているTotal要請数
		buf=(buf+check[i].node.size())%MOD;
		ans=ans+(n-1-buf)%MOD;
	}

	cout << ans << endl;
}