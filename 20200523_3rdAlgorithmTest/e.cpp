// 2020.05.23 Thu
// 第3回アルゴリズム実技検定
// E問題 --

// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

struct tree{
	vector<int> node;	
};

// メイン
int main()
{
	// 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);
	
	int n,m,q;
	cin >> n >> m >> q;
//	tree *net = new tree[n+1];
	vector<vector<bool>> net(n+1,vector<bool>(n+1,false));
	vector<int> color(n+1);
	
	// u, v入力
	int u,v;
	for(int i=1;i<=m;i++){
		cin >> u >> v;
		net[u][v] = true;
		net[v][u] = true;
	}

	// cを入力
	int c;
	for(int i=1;i<=n;i++){
		cin >> c;
		color[i]=c;
	}
	
	// sを入力
	int s, x, y;
	for(int i=1;i<=q;i++){
		// cout << "Q:" << i << endl;
		cin >> s;
		
		if(s==1){
			cin >> x;
			cout << color[x] << endl;
			for(int j=1;j<=n;j++){
				if(net[x][j]){
					// cout << j << ":" << color[j] << "⇒" << color[x]<<endl;
					color[j]=color[x];
				}
			}
		}

		if(s==2){
			cin >> x >> y;
			cout << color[x] << endl;
			// for(int j=1;j<=n;j++){
			// 	if(net[x][j]) {
			// 		// cout << j << ":" << color[j] << "⇒" << color[x]<<endl;
			// 		color[j]=color[x];
			// 	}
			// }
			// cout << x << ":" << color[x] << "⇒" << y << endl;
			color[x] = y;
		}
	}
}