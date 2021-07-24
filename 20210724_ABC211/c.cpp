#include <bits/stdc++.h>

using namespace std;

long long MOD = 1e9 + 7;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	string s;
	cin >> s;

	int i,j,l;
	vector<vector<int>> chokudai(8);
	for(i=0;i<(int)s.length();i++){
		if(s[i]=='c') chokudai[0].push_back(i);
		else if(s[i]=='h') chokudai[1].push_back(i);
		else if(s[i]=='o') chokudai[2].push_back(i);
		else if(s[i]=='k') chokudai[3].push_back(i);
		else if(s[i]=='u') chokudai[4].push_back(i);
		else if(s[i]=='d') chokudai[5].push_back(i);
		else if(s[i]=='a') chokudai[6].push_back(i);
		else if(s[i]=='i') chokudai[7].push_back(i);
	}

	//テスト
	// for(int i=0;i<8;i++){
	// 	for(auto c: chokudai[i]){
	// 		cout << c << ",";
	// 	}
	// 	cout << endl;
	// }

	for(i=0;i<7;i++){
		for(j=0;j<(int)chokudai[i].size();j++){
			for(l=0;l<(int)chokudai[i+1].size();l++){
				if(chokudai[i][j] < chokudai[i+1][l]){
					chokudai[i][j] = (int)chokudai[i+1].size() - l;
					break;
				}
			}
			if(l==(int)chokudai[i+1].size()) chokudai[i][j] = 0;
		}
	}
	
	long long sum;
	for(i=5;0<=i;i--){
		for(j=0;j<(int)chokudai[i].size();j++){
			sum = 0;
			for(l=0;l<chokudai[i][j];l++){
				sum += chokudai[i+1][chokudai[i+1].size() - 1 - l];
				sum %= MOD;
			}
			chokudai[i][j] = sum;
		}
	}
	long long ans = 0;
	for(auto val: chokudai[0]){
		ans += val;
		ans %= MOD;
	}

	cout << ans << endl;
}