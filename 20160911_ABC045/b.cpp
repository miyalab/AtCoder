// インクルード
#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <iomanip>

// 名前空間省略
using namespace std;

// メイン
int main()
{
	// 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	vector<string> s(3);
    for(int i=0;i<3;i++) cin >> s[i];
    
    int check_person = 0;
    vector<int> cnt(3,0);
    
    while(1){
        cnt[check_person]++;
        if(cnt[check_person]>s[check_person].length()){
            if(check_person == 0) cout << "A" << endl;
            if(check_person == 1) cout << "B" << endl;
            if(check_person == 2) cout << "C" << endl;
            return 0;
        }

        //cout << check_person << ":" << cnt[check_person] << endl;
        if(s[check_person][cnt[check_person]-1] == 'a'){
            check_person = 0;
        }
        else if(s[check_person][cnt[check_person]-1] == 'b'){
            check_person = 1;
        }
        else if(s[check_person][cnt[check_person]-1] == 'c'){
            check_person = 2;
        }
    }
}