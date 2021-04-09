#include <bits/stdc++.h>

using namespace std;

const string num[10][5] =
{
    {
        ".###",
        ".#.#",
        ".#.#",
        ".#.#",
        ".###"
    },{
        "..#.",
        ".##.",
        "..#.",
        "..#.",
        ".###"
    },{
        ".###",
        "...#",
        ".###",
        ".#..",
        ".###"
    },{
        ".###",
        "...#",
        ".###",
        "...#",
        ".###"
    },{
        ".#.#",
        ".#.#",
        ".###",
        "...#",
        "...#"
    },{
        ".###",
        ".#..",
        ".###",
        "...#",
        ".###"
    },{
        ".###",
        ".#..",
        ".###",
        ".#.#",
        ".###"
    },{
        ".###",
        "...#",
        "...#",
        "...#",
        "...#"
    },{
        ".###",
        ".#.#",
        ".###",
        ".#.#",
        ".###"
    },{
        ".###",
        ".#.#",
        ".###",
        "...#",
        ".###"
    }
};

int main()
{
    // 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	//cout << fixed << setprecision(16);

    int i,j;
    int n;
    string ans;
    string *s = new string[5];

    cin >> n;
    for(i=0;i<5;i++){
        cin >> s[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<=9;j++){
            if(s[0].substr(4*i,4) != num[j][0]) continue;
            if(s[1].substr(4*i,4) != num[j][1]) continue;
            if(s[2].substr(4*i,4) != num[j][2]) continue;
            if(s[3].substr(4*i,4) != num[j][3]) continue;
            if(s[4].substr(4*i,4) != num[j][4]) continue;
            ans = ans + to_string(j);
        }
    }
    cout << ans << endl;
}