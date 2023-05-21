#include <bits/stdc++.h>

using namespace std;

const std::string KEYWORD = "snuke";
const std::pair<int,int> CURSORS[] = {
	{-1,-1}, {-1, 0}, {-1, 1},
	{ 0,-1},          { 0, 1},
	{ 1,-1}, { 1, 0}, { 1, 1}
};

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
	for(int i=0; i<h && ans.first.first==0; i++){
		for(int j=0; j<w && ans.first.first==0; j++){
			for(const auto &cursor: CURSORS){
				bool word_check = true;
				for(int k=0, size=KEYWORD.size(); k<size && word_check; k++){
					const int y = i+k*cursor.first;
					const int x = j+k*cursor.second;
					if(y<0 || h<=y || x<0 || w<=x) word_check = false;
					else if(s[y][x] != KEYWORD[k]) word_check = false;
				}
				if(word_check){
					ans.first = {i+1,j+1};
					ans.second = cursor;
					break;
				}
			}
		}
	}
	
	for(int i=0, size=KEYWORD.size(); i<size; i++){
		std::cout << ans.first.first + i*ans.second.first << " " << ans.first.second + i*ans.second.second << std::endl;
	}
}