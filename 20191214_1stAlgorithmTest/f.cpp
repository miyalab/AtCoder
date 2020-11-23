#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<string> word;

    int cnt=-1;
    bool flag = false;

    // 文字列の分割処理
    for(int i=0; i<s.length(); i++){
        // 大文字検出
        if('A' <= s[i] && s[i] <= 'Z'){
            // 最初の文字
            if(flag == false){
                flag = true;
                cnt++;
                word.push_back("");
            }
            // 最終文字
            else{
                flag = false;
            }
            // 大文字⇒小文字変換
            s[i] = s[i]+0x20;
        }
        word[cnt] += s[i];
    }

    // 辞書順ソート（大文字、小文字が混ざるとうまくソートされない）
    sort(word.begin(),word.end());

    for(int i=0;i<=cnt;i++){
        // 小文字⇒大文字
        word[i][0] -=0x20;
        word[i][word[i].length()-1] -= 0x20;
        cout << word[i];
    }
    cout << endl;
    
}