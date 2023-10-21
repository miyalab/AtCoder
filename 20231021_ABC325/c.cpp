// ラベリングを実装すればよい
#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);    

	int h,w;
	cin >> h >> w;
	vector<string> s(h);
	for(int i=0; i<h; i++) cin >> s[i];

	int num=1;
	vector<int> table(1,0);
	vector<vector<int>> dst(h, vector<int>(w,0));
	for(int y=0; y<h; y++){
		for(int x=0; x<w; x++){
			if(s[y][x] == '#'){
				dst[y][x] = num;

				if(y){
					if(x && dst[y-1][x-1]) dst[y][x] = dst[y-1][x-1];

					if(dst[y-1][x]){
						if(dst[y][x] != num) dst[y-1][x] = table[dst[y-1][x]] = dst[y][x];
						else dst[y][x] = dst[y-1][x];
					}

					if(x < w-1 && dst[y-1][x+1]){
						if(dst[y][x] != num) dst[y-1][x+1] = table[dst[y-1][x+1]] = dst[y][x];
						else dst[y][x] = dst[y-1][x+1];
					}
				}

				if(x && dst[y][x-1]){
					if(dst[y][x] != num) dst[y][x-1] = table[dst[y][x-1]]= dst[y][x];
					else dst[y][x] = dst[y][x-1];
				}

				// 新しいラベルだった場合には，ラベル数をカウントアップ + テーブルに追加
				if(dst[y][x] == num) table.emplace_back(num++);
			}
		}
	}

	bool check;
	do{
		check = false;
		for(int i=table.size()-1; 0<=i; i--){
			int buf = table[i];
			table[i] = table[table[i]];
			if(buf != table[i]) check = true;
		}
	} while(check);

	// for(int y=0; y<h; y++){
	// 	for(int x=0; x<w; x++){
	// 		printf("%x", table[dst[y][x]]);
	// 	}
	// 	printf("\n");
	// }

	int ans = table.size() - 1;
	for(int i=1, size=table.size(); i<size; i++){
		ans -= (i != table[i]);
	}
	cout << ans << endl;
}