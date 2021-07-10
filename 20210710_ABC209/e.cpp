#include <bits/stdc++.h>

using namespace std;

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	vector<string> s(n + 1);
	vector<string> sl(n + 1);
	map<string,int> sfcheck;
	map<string,int> slcheck;
	for(int i=1;i<=n;i++){
		cin >> s[i];
		sl[i] = s[i].substr(s[i].length() - 3,3);
		sfcheck[s[i].substr(0,3)] = i;
		slcheck[sl[i]] = i;
	}

	map<int, bool> anscheck;
	for(auto c : slcheck){
		if(sfcheck[c.first] != 0){
			anscheck[c.second] = true;
			break;
		} 
	}

	for(int i=1;i<=n;i++){
		int cnt = 0;
		int set = i;
		while(1){
			if(sfcheck[sl[set]] != 0){
				set = sfcheck[sl[set]];
				if(anscheck[set] == true){
					cout << "Draw" << endl;
					break;
				}
			}
			else{
				if(cnt % 2 == 0) cout << "Takahashi" << endl;
				else cout << "Aoki" << endl;
				break;
			}
			cnt++;
		}
	}
}