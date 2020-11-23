#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n,q;
    cin >> n >> q;

    // ユーザー作成および初期化
    string str = "";
    for(int i=0;i<n;i++) str += "N";
    vector<string> user(n,str);

    int x,y,z;
    for(int i=0;i<q;i++){
        cin >> x;

        // フォロー
        if(x==1){
            int y, z;
            cin >> y >> z;
            user[y-1][z-1] = 'Y';
        }

        // フォロー返し
        else if(x==2){
            cin >> y;
            string buf = user[y-1];

            // ユーザーyのフォロワー探索
            for(int j=0;j<n;j++){
                if(user[j][y-1] == 'Y') buf[j] = 'Y';
            }
            user[y-1] = buf;
        }

        // フォローフォロー
        else {
            cin >> y;
            string buf = user[y-1];

            // ユーザーのフォロー探索
            for(int j=0;j<n;j++){
                if(user[y-1][j] == 'Y'){
                    // ユーザーjのフォロー探索
                    for(int k=0;k<n;k++){
                        if(user[j][k]=='Y') buf[k] = 'Y';
                    }
                }
            }
            user[y-1] = buf;
        }
    }
    
    // 自分自身はフォロー禁止
    for(int i=0;i<n;i++) user[i][i] = 'N';

    // 結果出力
    for(int i=0;i<n;i++) cout << user[i] << endl;
}