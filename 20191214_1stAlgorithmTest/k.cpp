#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

struct tree{
	vector<int> node;
};

inline void Search(tree vv[], int node_num)
{
	cout << "Serach" << node_num;
	int size = vv[node_num].node.size();
	cout << " size:" << size;
	for(int i=0;i<size;i++){
		Search(vv,i);
		vv[node_num].node.insert(vv[node_num].node.end(), vv[i].node.begin(), vv[i].node.end());
	}
	size = vv[node_num].node.size();
	cout << " size:" << size;
	for(int j=0;j<vv[j].node.size();j++){
		cout << vv[j].node[j] << " ";
	}
	cout << endl;
}

int main()
{
	int n;
	cin >> n;
	
	tree *buka = new tree[n+1];
	// vector<vector<int>> buka(n+1);
	int p;

	// 上司登録
	for(int i=1;i<=n;i++){
		cin >> p;
		// iが社長以外
		if(p!=-1) buka[p].node.push_back(i);   // iはpの部下であると登録
		else buka[0].node.push_back(i);
	}

	int q;
	cin >> q;
	int a,b;

	for(int i=1;i<=n;i++){
		for(int j=0;j<buka[i].node.size();j++){
			cout << buka[i].node[j] << " ";
		}
		cout <<endl;
	}

	// 部下登録
	Search(buka, 0);

	for(int i=1;i<=n;i++){
		for(int j=0;j<buka[i].node.size();j++){
			cout << buka[i].node[j] << " ";
		}
		cout <<endl;
	}

	// クエリ入力
	for(int i=0;i<q;i++){
		cin >> a >> b;
	}
}