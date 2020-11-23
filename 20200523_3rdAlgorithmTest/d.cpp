// 2020.05.23 Thu
// 第3回アルゴリズム実技検定
// D問題 --

// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// メイン
int main()
{
	// 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int n;
	cin >> n;
	
	vector<string> s(5);
	for(int i=0;i<5;i++) cin >> s[i];

	vector<vector<string>> data(10,vector<string>(5));
	data[0][0] = ".###";
	data[0][1] = ".#.#";
	data[0][2] = ".#.#";
	data[0][3] = ".#.#";
	data[0][4] = ".###";
	
	data[1][0] = "..#.";
	data[1][1] = ".##.";
	data[1][2] = "..#.";
	data[1][3] = "..#.";
	data[1][4] = ".###";
	
	data[2][0] = ".###";
	data[2][1] = "...#";
	data[2][2] = ".###";
	data[2][3] = ".#..";
	data[2][4] = ".###";

	data[3][0] = ".###";
	data[3][1] = "...#";
	data[3][2] = ".###";
	data[3][3] = "...#";
	data[3][4] = ".###";
	
	data[4][0] = ".#.#";
	data[4][1] = ".#.#";
	data[4][2] = ".###";
	data[4][3] = "...#";
	data[4][4] = "...#";
	
	data[5][0] = ".###";
	data[5][1] = ".#..";
	data[5][2] = ".###";
	data[5][3] = "...#";
	data[5][4] = ".###";
	
	data[6][0] = ".###";
	data[6][1] = ".#..";
	data[6][2] = ".###";
	data[6][3] = ".#.#";
	data[6][4] = ".###";
	
	data[7][0] = ".###";
	data[7][1] = "...#";
	data[7][2] = "...#";
	data[7][3] = "...#";
	data[7][4] = "...#";
	
	data[8][0] = ".###";
	data[8][1] = ".#.#";
	data[8][2] = ".###";
	data[8][3] = ".#.#";
	data[8][4] = ".###";

	data[9][0] = ".###";
	data[9][1] = ".#.#";
	data[9][2] = ".###";
	data[9][3] = "...#";
	data[9][4] = ".###";
	
	// デバッグ用
	// for(int i=0;i<5;i++){
	// 	for(int j=0;j<10;j++){
	// 		cout << data[j][i];
	// 	}
	// 	cout << endl;
	// }
	// for(int i=0;i<5;i++){
	// 	cout << s[i] << endl;
	// }
	

	string ans="";
	bool check;
	for(int i=0;i<n;i++){
		// cout << "check n:" << i << endl;
		// 0~9までマッチするものを探索
		for(int j=0;j<10;j++){
			// cout << "check_num:" << j << endl;
			check=true;
			for(int k=0;k<5;k++){
				// cout << s[k].substr(4*i,4) << " " << data[j][k] << endl;
				if(s[k].substr(4*i,4)!=data[j][k]){
					check=false;
					break;
				}
			}
			if(check){
				// cout << "check: " << j << endl;
				ans+=j+'0';
				break;
			}
		}
	}

	cout << ans << endl;
}