#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

inline bool StringToInt(string s, long long *ret)
{
	*ret = 0;
	bool sign = false;
	int buf;

	// 文字⇒数値変換
	for(int i=0;i<s.size();i++){
		switch(s[i]){
		case '0': buf=0; break;
		case '1': buf=1; break;
		case '2': buf=2; break;
		case '3': buf=3; break;
		case '4': buf=4; break;
		case '5': buf=5; break;
		case '6': buf=6; break;
		case '7': buf=7; break;
		case '8': buf=8; break;
		case '9': buf=9; break;
		case '-':
			// error
			if(i!=0) return false;
			sign = true;
			break;
		default:
			//error
			return false;
			break;
		}

		// 加算処理
		*ret *= 10;
		if(sign == false) *ret += buf;
		else *ret -= buf;
	}

	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	string s;
	long long ans;
	
	if(StringToInt(s,&ans)==false) cout << "error" << endl;
	else cout << ans*2 << endl;
}