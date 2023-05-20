#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	int n, m;
	std::cin >> n >> m;
	std::string s[n];
	for(int i=0; i<n; i++) std::cin >> s[i];

	// 1文字だけ異なる文字列組み合わせ全探索 n*m*log(n)
	std::vector<std::vector<int>> conbies(n);
	for(int i=0; i<n-1; i++){
		for(int j=i; j<n; j++){
			int cnt = 0;
			for(int k=0; k<m; k++) if(s[i][k] == s[j][k]) cnt++;
			if(cnt == m-1){
				conbies[i].emplace_back(j);
				conbies[j].emplace_back(i);
			}
		}
	}

	// 組み合わせ0のものと1のものをチェック
	int conbi_zero_cnt = 0;
	std::vector<int> conbi_one_indexes;
	for(int i=0; i<n; i++){
		if(conbies[i].size() == 0) conbi_zero_cnt++;
		if(conbies[i].size() == 1) conbi_one_indexes.emplace_back(i);
		std::cout << i <<": ";
		for(int j=0, size=conbies[i].size(); j<size; j++) std::cout << conbies[i][j] << " ";
		std::cout << std::endl;
	}

	// 組み合わせがないものが存在、組み合わせが1つのみが2つより多い場合は解なし
	if(conbi_zero_cnt != 0 || conbi_one_indexes.size() > 2){
		std::cout << "No" << std::endl;
		return 0;
	}

	// 探索
	for(int i=0; i<n; i++){
		
	}
	
	// すべての文字列を参照したか
	std::string ans = "Yes";


	std::cout << ans << std::endl;
	return 0;
}