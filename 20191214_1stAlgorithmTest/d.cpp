#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n+1,0);
    bool flag = false;

    // データ取得
    for(int i=0;i<n;i++){
        int buf;
        cin >> buf;

        a[buf]+=1;

        // 重複検出
        if(a[buf]==2){
            cout << buf << " ";
            flag = true;
        }
    }

    // 重複あり
    if(flag == true){
        // データなし探索
        for(int i=1;i<=n;i++){
            if(a[i]==0) cout << i << endl;
        }
    }
    // 重複なし
    else{
        cout << "Correct" << endl;
    }
}