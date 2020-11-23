#include <bits/stdc++.h>

using namespace std;

struct tree{
	int dps=-1;
	vector<int> node;
};

int main()
{
	int n,m;
	cin >> n >> m;
	
	vector<tree> room(n);

	int a, b;
	for(int i=0;i<m;i++){
		cin >> a >> b;
		
		// 隣接部屋登録
		room[a-1].node.push_back(b-1);
		room[b-1].node.push_back(a-1);
	}

	// デバッグ用
	// for(int i=0;i<n;i++){
	// 	cout << "room_no " << i+1 << ":";
	// 	for(int j=0;j<room[i].node.size();j++){
	// 		cout << room[i].node[j]+1;
	// 	}
	// 	cout << endl;
	// }

	bool check=true;
	vector<int> search_room;
	search_room.push_back(0);
	vector<int> next_search;
	
	while(check){
		check=false;

		// Searchすべき部屋数だけ回す
		for(int i=0;i<search_room.size();i++){
			// Select中の部屋のノード数だけ回す
			for(int j=0;j<room[search_room[i]].node.size();j++){
				// Select中の部屋と隣接している部屋のdpsが割り当て前
				if(room[room[search_room[i]].node[j]].dps == -1){
					room[room[search_room[i]].node[j]].dps = search_room[i]+1;	// どこの部屋から来たのか登録
					next_search.push_back(room[search_room[i]].node[j]);		// 次の部屋探索場所
					check=true;													// 次の部屋もある
				}
			}
		}
		// 次の探索部屋を更新
		search_room = next_search;
		next_search.erase(next_search.begin(), next_search.end());
	}

	// 到達できない部屋がないかチェック
	for(int i=1;i<n;i++){
		if(room[i].dps==-1){
			cout << "No" << endl;
			return 0;
		}
	}
	cout << "Yes" << endl;
	for(int i=1;i<n;i++){
		cout << room[i].dps << endl;
	}
}