#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    // 処理時間計測
    clock_t start=clock();

    // 入力高速化
    cin.tie(nullptr);
    ios::sync_with_stdio(false);

    // 乱数用
    srand(time(NULL));

    // 日数設定
    int d;
    cin >> d;
    
    // 減少率および幸福度
    vector<int> c(26);
    vector<vector<int>> s(d,vector<int>(26));
    for(int i=0;i<26;i++) cin >> c[i];
    for(int i=0;i<d;i++){
        for(int j=0;j<26;j++) cin >> s[i][j];
    }

    // 初期解
    int max_score=0;
    vector<int> select(d);
    for(int i=0;i<d;i++) select[i] = rand()%26;
    
    vector<int> t1(26,0);
    for(int i=1;i<=d;i++){
        int buf = select[i];
        for(int j=0;j<26;j++){
            if(j==buf){
                max_score+=s[i-1][j];
                t1[j]=i;
            }
            else max_score-=c[j]*(i-t1[j]);
        }
    }

    clock_t time=clock();
    while(time-start < 5000){
        vector<int> buf_v = select;

        int a=rand()%d;
        int b=rand()%26;
        buf_v[a]=b;

        // スコア計算
        int score=0;
        vector<int> t(26,0);
        for(int i=1;i<=d;i++){
            int buf = buf_v[i];

            for(int j=0;j<26;j++){
                if(j==buf){
                    score+=s[i-1][j];
                    t[j]=i;
                }
                else score-=c[j]*(i-t[j]);
            }
        }

        if(score > max_score){
            max_score = score;
            select = buf_v;
        }
        time=clock();
    }

    for(int i=0;i<d;i++) cout << select[i] << endl;
}