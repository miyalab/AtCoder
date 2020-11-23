#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	vector<string> c1, c2, c3;

	cin >> s;

	bool check;
	for(int i=0;i<(int)s.length();i++){
		check=true;
		for(int j=0;j<(int)c1.size();j++){
			if(s.substr(i,1)==c1[j]){
				check=false;
				break;
			}
		}
		if(check) c1.push_back(s.substr(i,1));

		if(i<(int)s.length()-1){
			check=true;
			for(int j=0;j<(int)c1.size();j++){
				if(s.substr(i,1)+"."==c1[j]){
					check=false;
					break;
				}
			}
			if(check) c1.push_back(s.substr(i,1)+".");
		}

		if(i<(int)s.length()-2){
			check=true;
			for(int j=0;j<(int)c1.size();j++){
				if(s.substr(i,1)+".."==c1[j]){
					check=false;
					break;
				}
			}
			if(check) c1.push_back(s.substr(i,1)+"..");
		}

		if(1<=i){
			check=true;
			for(int j=0;j<(int)c1.size();j++){
				if("."+s.substr(i,1)==c1[j]){
					check=false;
					break;
				}
			}
			if(check) c1.push_back("."+s.substr(i,1));
		}
		
		if(2<=i){
			check=true;
			for(int j=0;j<(int)c1.size();j++){
				if(".."+s.substr(i,1)==c1[j]){
					check=false;
					break;
				}
			}
			if(check) c1.push_back(".."+s.substr(i,1));
		}

		if(1<=i && i<(int)s.length()-1){
			check=true;
			for(int j=0;j<(int)c1.size();j++){
				if("."+s.substr(i,1)+"."==c1[j]){
					check=false;
					break;
				}
			}
			if(check) c1.push_back("."+s.substr(i,1)+".");
		}
	}
	c1.push_back(".");

	// // デバッグ用
	// for(int i=0;i<(int)c1.size();i++) cout << c1[i] << endl;

	for(int i=0;i<(int)s.length()-1;i++){
		check=true;
		for(int j=0;j<(int)c2.size();j++){
			if(s.substr(i,2)==c2[j]){
				check=false;
				break;
			}
		}
		if(check) c2.push_back(s.substr(i,2));

		if(i+1<(int)s.length()-1){
			check=true;
			for(int j=0;j<(int)c2.size();j++){
				if(s.substr(i,2)+"."==c2[j]){
					check=false;
					break;
				}
			}
			if(check) c2.push_back(s.substr(i,2)+".");
		}

		if(1<=i){
			check=true;
			for(int j=0;j<(int)c2.size();j++){
				if("."+s.substr(i,2)==c2[j]){
					check=false;
					break;
				}
			}
			if(check) c2.push_back("."+s.substr(i,2));
		}
	}
	if((int)c2.size()>0) c2.push_back("..");

	// // デバッグ用
	// for(int i=0;i<(int)c2.size();i++) cout << c2[i] << endl;

	for(int i=0;i<(int)s.length()-2;i++){
		check=true;
		for(int j=0;j<(int)c3.size();j++){
			if(s.substr(i,3)==c3[j]){
				check=false;
				break;
			}
		}
		if(check) c3.push_back(s.substr(i,3));

		check=true;
		for(int j=0;j<(int)c3.size();j++){
			if(s.substr(i,1)+"."+s.substr(i+2,1)==c3[j]){
				check=false;
				break;
			}
		}
		if(check) c3.push_back(s.substr(i,1)+"."+s.substr(i+2,1));
	}
	if((int)c3.size()>0) c3.push_back("...");

	// // デバッグ用
	// for(int i=0;i<(int)c3.size();i++) cout << c3[i] << endl;

	cout << (int)c1.size()+c2.size()+c3.size() << endl;
}