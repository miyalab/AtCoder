#include <bits/stdc++.h>

using namespace std;

struct node{
    int color;
    vector<int> edge;
};

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	//cout << fixed << setprecision(16);

    int n,m,q;
    cin >> n >> m >> q;

    // グラフデータ入力
    int u,v;
    vector<node> sprinkler(n);
    for(int i=0; i<m; i++){
        cin >> u >> v;
        sprinkler[u].edge.emplace_back(v);
        sprinkler[v].edge.emplace_back(u);
    }

    // 色データ入力
    int c;
    for(int i=0; i<n; i++){
        cin >> c;
        sprinkler[i].color = c;
    }

    // クエリ
    int s,x,y;
    for(int i=0; i<q; i++){
        cin >> s;
        if(s == 1){
            cin >> x;
            cout << sprinkler[x].color << endl;

            
        }
        else{
            cin >> x >> y;
        }
    }
}