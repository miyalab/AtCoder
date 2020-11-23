// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

inline void swap(string *a, string *b)
{
    string t = *a;
    *a = *b;
    *b = t;
}

inline int partition(vector<string> &array, int l, int r)
{
    // cout << "partition ";
    string pivot = array[r];
    int i = (l-1);
    // cout << "check1 ";
    for(int j=l; j<=r-1; j++){
        if(array[j] <= pivot){
            // cout << "check2 ";
            i++;
            // cout << array[i] << array[j] << " ";
            swap(array[i], array[j]);
            // cout << array[i] << array[j] << " ";
        }
    }
    // cout << "check3 ";
    swap(array[i+1], array[r]);
    // cout << "check4" << endl;
    return(i+1);
}

inline void QuickSort(vector<string> &array, int l,  int r)
{
//    cout << "quick" << endl;
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
	// ios::sync_with_stdio(false);
	// cin.tie(nullptr);

	string s;
	cin >> s;

	int j=-1;
	bool flag = false;
	vector<string> word;

	for(int i=0; s[i]!='\0';i++){
        // cout << "check";
		// 大文字確認
		if('A'<= s[i] && s[i]<='Z'){
            // cout << " large font";
			// 1文字目
			if(flag == false){
                // cout << " first";
				j++;
                word.push_back("");
				flag = true;
			}

			// 最後の文字
			else {
                // cout << " last";
                flag = false;
            }
		}
        // cout << " add char" << endl;
		word[j] += s[i];
	}

    // cout << word.size() << endl;
	// for(int i=0;i<word.size();i++){
    //     cout << i << word[i] << endl;
    // }

    // for(int i=1;i<word.size();i++){
    //     cout << word[i-1] << " " << word[i] << " ";
    //     if(word[i-1]<word[i]) cout << word[i] << endl;
    //     else cout << word[i-1] << endl;
    // }

    QuickSort(word, 0, word.size()-1);
    
    for(int i=0;i<word.size();i++){
        cout << word[i] << endl;
    }
}
