#include <bits/stdc++.h>

using namespace std;



int main()
{
    string s;
    cin >> s;
    
    constexpr int searchNum = 4;
    const string search[searchNum] = {
        "dream",
        "dreamer",
        "erase",
        "eraser"
    };
    const int searchLength[searchNum] = {5,7,5,6};
    vector<vector<int>> t(searchNum,vector<int>());

    int pos;
    int poswork;
    for(int i=0;i< searchNum;i++){
        pos = 0;
        do{
            poswork = s.find(search[i], pos);
            if(poswork == string::npos) break;
            t[i].push_back(poswork);
            pos = poswork + searchLength[i] - 1;
        }
        while(pos <= s.length());
    }

    // for(int i=0; i < searchNum; i++){
    //     cout << search[i] << endl;
    //     for(int j=0; j < t[i].size(); j++){
    //         cout << t[i][j] << endl;
    //     }
    // }

    
}