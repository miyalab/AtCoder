// コンパイラオプション
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

// インクルード
#include <iostream>
#include <string>

// 名前空間省略
using namespace std;

inline void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

inline int partition(int array[], int l, int r)
{
    int pivot = array[r];
    int i = (l-1);
    for(int j=l; j<=r-1; j++){
        if(array[j] <= pivot){
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i+1], &array[r]);
    return(i+1);
}

inline void QuickSort(int array[], int l, int r)
{
    if(l < r){
        int pivot = partition(array, l, r);
        QuickSort(array, l, pivot - 1);
        QuickSort(array, pivot + 1, r);
    }
}

// メイン関数
int main()
{
    // 標準入出力　高速化
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int array[6];

    for(int i=0; i<6; i++){
        cin >> array[i];
    }

    QuickSort(array, 0, sizeof(array)/sizeof(array[0])-1);

    cout << array[3] << "\n";
}
