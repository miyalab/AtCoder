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

	string q="........";
	vector<string> s(8);
	for(int i=0;i<8;i++){
		cin >> s[i];
		if(s[i].find('Q') != string::npos) q[s[i].find('Q')] = 'Q';
	}
	// for(int i=0;i<8;i++) cout << q[i] << s[i] << endl;
	
	cout << q << endl;
	
	// NG箇所探索
	// for(int i=0;i<8;i++){
	// 	if(s[i].find('Q') == string::npos) continue; 
	// 	for(int j=0;j<8;j++){
	// 		if(s[i][j]=='Q'){
	// 			for(int k=0;k<8;k++){
	// 				if(i==k) continue;
	// 				if(j-abs(k-i)>=0){
	// 					if(s[k][j-abs(k-i)] == 'Q'){
	// 						cout << "No Answer" << endl;
	// 						return 0;
	// 					}
	// 					s[k][j-abs(k-i)]='x';
	// 				}
	// 				if(j+abs(k-i)<=8){
	// 					if(s[k][j+abs(k-i)] == 'Q'){
	// 						cout << "No Answer" << endl;
	// 						return 0;
	// 					}
	// 					s[k][j+abs(k-i)]='x';
	// 				}
	// 				if(s[k][j] == 'Q'){
	// 					cout << "No Answer" << endl;
	// 					return 0;
	// 				}
	// 				s[k][j] = 'x';
	// 			}
	// 		}
	// 	}
	// }

	// cout <<endl;
	// for(int i=0;i<8;i++) cout << s[i] << endl;

	// vector<string> buf = s;
	// for(int i=0;i<8;i++){
	// 	// Qがある場合は戻る
	// 	if(s[i].find('Q')!=string::npos) continue;

	// 	for(int j=0;j<8;j++){
	// 		if(s[i][j]=='.'){
	// 			s[i][j] = 'Q';
	// 			for(int k=0;k<8;k++){
	// 				if(i==k) continue;
	// 				if(j-abs(k-i)>=0){
	// 					s[k][j-abs(k-i)]='x';
	// 				}
	// 				if(j+abs(k-i)<=8){
	// 					s[k][j+abs(k-i)]='x';
	// 				}
	// 				s[k][j] = 'x';
	// 			}
	// 			break;
	// 		}
	// 	}
	// }
	// cout << endl;

	for(int i=0;i<8;i++) cout << s[i] << endl;
}
