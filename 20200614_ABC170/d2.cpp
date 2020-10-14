#pragma GCC target("avx2")
#pragma GCC optimize("O3")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>

using namespace std;

// 約数列挙
vector<int> divisor(int n) 
{
    vector<int> ret;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
        ret.push_back(i);
        if(i * i != n) ret.push_back(n / i);
        }
    }
    //sort(begin(ret), end(ret));　時間短縮で削除
    return (ret);
}

int main()
{
    // 入出力高速化
    cin.tie(nullptr);
    ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    
    // map<key型, データ型>
    map<int ,int> a;
    
    int buf;
    for(int i=0;i<n;i++){
        cin >> buf;
        a[buf]++;
    }

    int ans=0;
    vector<int> vec;
    for(auto p1: a){
        // チェック中の数字が2つ以上あるなら、cntなし
        if(p1.second>=2) continue;
        
        // チェック中の約数が存在するかデータにあるかチェック
        bool check=true;
        vec = divisor(p1.first);
        for(int i=0;i<vec.size();i++){
            if(vec[i]==p1.first) continue;
            if(a[vec[i]]>0){
                check=false;
                break;
            }
        }
        
        // 割り切れる数なしのときcnt up
        if(check) ans++;
    }

    cout << ans << endl;
}
