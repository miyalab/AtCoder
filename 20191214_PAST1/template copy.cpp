// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// メイン関数
int main()
{
	// 標準入出力　高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	cin >> s;

	int j=0, k=0;
	bool flag = false;
	vector<string> word;

	for(int i=0; s[i]!=NULL;i++){
		// 大文字確認
		if('A'<= s[i] && s[i]<='Z'){
			// 1文字目
			if(flag == false){
				j++;
				k=0;
				flag = true;
			}

			// 最後の文字
			else flag = false;
		}

		word[j][k] += s[i];
		k++;
	}

	for(int i=0;i<word.size();i++) cout << word[i] << endl;
}
