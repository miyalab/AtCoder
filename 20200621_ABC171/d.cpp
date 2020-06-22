#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;;
    cin >> n;
    
    // 入力された数値が出てきた回数と和sumを求めておく
    long long sum=0;
    map<long long, long long> a;
    for(int i=0;i<n;i++){
        long long buf;
        cin >> buf;
        sum += buf;
        a[buf]++;
    }

    int q;
    cin >> q;
    for(int i=0;i<q;i++){
        long long b, c;
        cin >> b >> c;
        sum += (c-b) * a[b];        // (bがcになった変化量)×bの入力された数をsumに加算
        a[c]+=a[b];                 // cの回数にbの回数を加算
        a[b]=0;                     // bの回数を0にする
        cout << sum << endl;
    }
}