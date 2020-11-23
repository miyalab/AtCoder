#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// 3進数変換して指定した桁目を取得
inline int henkan(int base, int omomi)
{
	for(int i=0;i<omomi;i++){
		base /= 3;
	}
	
	return (base % 3);
}

int main()
{
	int n;
	cin >> n;
	
	vector<int> Group(n,0);
	vector<vector<int>> a(10,vector<int>(10,0));

	// 幸福度入力
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			cin >> a[i][j];
			// a[j][i]=a[i][j];
		}
	}

	// for(int i=0;i<n;i++){
	// 	for(int j=0;j<n;j++){
	// 		cout << a[i][j] << "	";
	// 	}
	// 	cout << endl;
	// }

	long long happy=-10000000, happy_buf=0;

	// 3グループ分けで全探索(3^n-1パターン)
	for(int i=0;i<pow(3,n)-1;i++){
		// グループ分け(0,1,2グループ)
		for(int j=0;j<n;j++) Group[j] = henkan(i, j);

		// グループの幸福度計算
		for(int x=0; x<n-1;x++){
			if(Group[x]==0){
				// 0グループにいる社員xとのペア探索
				for(int y=x+1;y<n;y++){
					if(Group[y]==0) happy_buf += a[x][y];
				}
			}
			else if(Group[x]==1){
				// 1グループにいる社員xとのペア探索
				for(int y=x+1;y<n;y++){
					if(Group[y]==1) happy_buf += a[x][y];
				}
			}
			else{
				// 2グループにいる社員xとのペア探索
				for(int y=x+1;y<n;y++){
					if(Group[y]==2) happy_buf += a[x][y];
				}
			}
		}

		// デバッグ用
		// for(int i=0;i<n;i++) cout << Group[i];
		// cout << ":" << happy_buf << endl;
		
		// 最大値更新
		if(happy < happy_buf){
			happy=happy_buf;
		}
		happy_buf=0;
	}

	cout << happy << endl;
}