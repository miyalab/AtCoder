#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;

	vector<string> c1, c2, c3;

	bool check=true;
	bool check2=true;

	// 1文字列探索
	for(int i=0;i<(int)s.length();i++){
		check = true;
		for(int j=0; j<(int)c1.size(); j++){
			if(s.substr(i,1)==c1[j]){
				check = false;
				break;
			}
		}
		if(check) c1.push_back(s.substr(i,1));

		if(i<(int)s.length()-1 && i+1<(int)s.length()){
			check2 = true;
			for(int k=0;k<(int)c1.size();k++){check2=true;
				if(s.substr(i,1)+"." == c1[k]){
					check2 = false;
					break;
				}
			}
			if(check2) c1.push_back(s.substr(i,1)+".");
		}
		if(i<(int)s.length()-2 && i+2<(int)s.length()){
			check2 = true;
			for(int k=0;k<(int)c1.size();k++){
				if(s.substr(i,1)+".." == c1[k]){
					check2 = false;
					break;
					}
			}
			if(check2) c1.push_back(s.substr(i,1)+"..");
		}
		if(0<i){
			check2 = true;
			for(int k=0;k<(int)c1.size();k++){
				if("."+s.substr(i,1) == c1[k]){
					check2 = false;
					break;
				}
			}
			if(check2) c1.push_back("."+s.substr(i,1));
		}
		if(1<i && (int)s.length()>2){
			check2 = true;
			for(int k=0;k<(int)c1.size();k++){
				if(".."+s.substr(i,1) == c1[k]){
					check2 = false;
					break;
				}
			}
			if(check2) c1.push_back(".."+s.substr(i,1));
		}
		if(0<i && i<(int)s.length()-1){
			check2 = true;
			for(int k=0;k<(int)c1.size();k++){
				if("."+s.substr(i,1)+"." == c1[k]){
					check2 = false;
					break;
				}
			}
			if(check2) c1.push_back("."+s.substr(i,1)+".");
		}
	}
	c1.push_back(".");

	// デバッグ用
	for(int i=0;i<c1.size();i++) cout << c1[i] << endl;

	// 2文字列探索
	for(int i=0;i<(int)s.length()-1;i++){
		check = true;
		for(int j=0; j<(int)c2.size(); j++){
			if(s.substr(i,2)==c2[j]){
				check = false;
				break;
			}
		}
		if(check) c2.push_back(s.substr(i,2));

		if(i<(int)s.length()-2){
			check2=true;
			for(int k=0;k<(int)c2.size();k++){
				if(s.substr(i,2)+"." == c2[k]){
					check2 = false;
					break;
				}
			}
			if(check2) c2.push_back(s.substr(i,2)+".");
		}
		if(0<i){
			check2=true;
			for(int k=0;k<(int)c2.size();k++){
				if("."+s.substr(i,2) == c2[k]){
					check2 = false;
					break;
				}
			}
			if(check2) c2.push_back("."+s.substr(i,2));
		}
	}
	c2.push_back("..");

	// デバッグ用
	for(int i=0;i<c2.size();i++) cout << c2[i] << endl;

	// 3文字列探索
	for(int i=0;i<(int)s.length()-2;i++){
		check = true;
		// 単純一致
		for(int j=0; j<(int)c3.size(); j++){
			if(s.substr(i,3)==c3[j]){
				check = false;
				break;
			}
		}
		if(check) c3.push_back(s.substr(i,3));

		check2 = true;
		for(int k=0;k<(int)c3.size();k++){
			if(s.substr(i,1)+"."+s.substr(i+2,1) == c3[k]){
				check2 = false;
				break;
			}
		}
		if(check2) c3.push_back(s.substr(i,1)+"."+s.substr(i+2,1));
	}
	if((int)s.length()>2) c3.push_back("...");

	// デバッグ用
	for(int i=0;i<c3.size();i++) cout << c3[i] << endl;
	
	cout << (int)c1.size()+c2.size()+c3.size() << endl;
}