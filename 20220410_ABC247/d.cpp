#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	int q;
	cin >> q;

	int key = 0;
	vector<pair<long long, long long>> data;
	data.clear();
	for(int i=0; i<q; i++){
		int a;
		cin >> a;
		if(a == 1){
			pair<long long, long long> xc;
			cin >> xc.first >> xc.second;
			data.push_back(xc);
		}
		if(a == 2){
			long long c;
			cin >> c;
			long long sum = 0;
			while(c > 0){
				if(data[key].second > c){
					//cout << "debug1 ["<<key<<"]" << data[key].second << ", " << data[key].first << endl;
					sum += c * data[key].first;
					data[key].second -= c;
					c = 0;
				}
				else {
					//cout << "debug2 ["<<key<<"]" << data[key].second << ", " << data[key].first << endl;
					sum += data[key].second * data[key].first;
					c -= data[key].second;
					key++;
				}
			}
			cout << sum << endl;
		}
	}
}