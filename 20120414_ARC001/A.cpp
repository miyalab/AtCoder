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

	int n;
	string s;

	cin >> n;
	cin >> s;

	vector<int> cnt(4,0);
	for(int i=0;i<s.size();i++){
		switch(s[i]){
		case '1':
			cnt[0]++;
			break;
		case '2':
			cnt[1]++;
			break;
		case '3':
			cnt[2]++;
			break;
		case '4':
			cnt[3]++;
			break; 
		}
	}
	int maxcnt=cnt[0];
	int mincnt=cnt[0];
	for(int i=1;i<4;i++){
		maxcnt = max(maxcnt, cnt[i]);
		mincnt = min(mincnt, cnt[i]);
	}
	cout << maxcnt << " " << mincnt << endl;

}
