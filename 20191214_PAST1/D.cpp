// コンパイラオプション
//#pragma GCC optimize("Ofast")
//#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

// インクルード
#include <iostream>

// 名前空間省略
using namespace std;

inline void swap(unsigned int *a, unsigned int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

inline int partition(unsigned int array[], int l, int r)
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

inline void QuickSort(unsigned int array[], int l,  int r)
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

    unsigned int n;
    cin >> n;
    
    unsigned int j;
    unsigned int k;
    static bool check = false;
    static bool *array = new bool[n];

    for(unsigned int i=0; i<n; i++){
        cin >> j;
        if(array[j-1] == false) array[j-1] = true;
        else{
            k = j;
            check = true;
        }
    }

    if(check == true){
        for(unsigned int i=0; i<n;i++){
            if(array[i] == false){
                cout << k << " " << i+1 << "\n";
                return 0;
            }
        }
    }
    else{
        cout << "Correct\n";
    }
}
