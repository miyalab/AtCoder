#include <bits/stdc++.h>

using namespace std;

const std::string KEYWORD = "snuke";

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);   

	int h, w;
	std::cin >> h >> w;
	std::vector<std::string> s(h);
	for(int i=0; i<h; i++) cin >> s[i];

	std::pair<std::pair<int, int>, std::pair<int, int>> ans = {{0,0}, {0,0}};
	for(int i=0; i<h && ans.second.first == 0 && ans.second.second == 0; i++){
		for(int j=0; j<w && ans.second.first == 0 && ans.second.second == 0; j++){
			//std::cout << i << " " << j << std::endl;
			if(s[i][j] == 's'){
				std::string word;

				// 左->右
				word = "s";
				for(int k=1; k<5 && j+k<w; k++) word += s[i][j+k];
				if(word == KEYWORD) ans.second = {0,1};

				// 右->左
				word = "s";
				for(int k=1; k<5 && j-k>=0; k++) word += s[i][j-k];
				if(word == KEYWORD) ans.second = {0,-1};

				// 上->下
				word = "s";
				for(int k=1; k<5 && i+k<h; k++) word += s[i+k][j];
				if(word == KEYWORD) ans.second = {1,0};

				// 下->上
				word = "s";
				for(int k=1; k<5 && i-k>=0; k++) word += s[i-k][j];
				if(word == KEYWORD) ans.second = {-1,0};

				// 右上
				word = "s";
				for(int k=1; k<5 && i-k>=0 && j+k<w; k++) word += s[i-k][j+k];
				if(word == KEYWORD) ans.second = {-1,1};

				// 右下
				word = "s";
				for(int k=1; k<5 && i+k<h && j+k<w; k++) word += s[i+k][j+k];
				if(word == KEYWORD) ans.second = {1,1};

				// 左上
				word = "s";
				for(int k=1; k<5 && i-k>=0 && j-k>=0; k++) word += s[i-k][j-k];
				if(word == KEYWORD) ans.second = {-1,-1};

				// 左下
				word = "s";
				for(int k=1; k<5 && i+k<h && j-k>=0; k++) word += s[i+k][j-k];
				if(word == KEYWORD) ans.second = {1,-1};

				if(ans.second.first != 0|| ans.second.second != 0) ans.first = {i,j};
			}  
		}
	}
	// std::cout << ans.first.first << " " << ans.first.second << std::endl;
	// std::cout << ans.second.first << " " << ans.second.second << std::endl;
	
	for(int i=0; i<5; i++){
		std::cout << ans.first.first + i*ans.second.first + 1 << " " << ans.first.second + i*ans.second.second + 1 << std::endl;
	}
}