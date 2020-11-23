#include <bits/stdc++.h>

using namespace std;

template <typename type>
type BaseChange(type num, type base, type digit)
{
    for(type i=0;i<digit;i++) num/=base;        
    return num%base;
}

int main()
{
    // 基本データ入力
    int n, m, x;
    cin >> n >> m >> x;
    
    // コストとデータ入力
    vector<int> c(n);
    vector<vector<int>> a(n,vector<int>(m));
    for(int i=0;i<n;i++){
        cin >> c[i];
        for(int j=0;j<m;j++) cin >> a[i][j];
    }

    int ans=(1<<30);

    // ビット全探索
    for(int i=1;i<(1<<n);i++){
        int cost=0;
        vector<int> state(m,0);
        for(int j=0;j<n;j++){
            // 検索文字がhit
            // cout << BaseChange(i,2,j);
            if(BaseChange(i,2,j)){
                cost+=c[j];
                for(int k=0;k<m;k++){
                    state[k]+=a[j][k];
                }
            }
        }
        // cout << endl;
        // デバッグ用
        // cout << " " << cost << " ";
        // for(int j=0;j<m;j++) cout << state[j] << " ";
        // cout << endl;
        
        bool check=true;
        for(int j=0;j<m;j++){
            if(state[j]<x){
                check=false;
                break;
            }
        }
        if(check) ans = min(ans, cost);
    }
    if(ans==(1<<30)) ans=-1;
    cout << ans << endl;
}