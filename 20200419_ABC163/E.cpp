// インクルード
#include <bits/stdc++.h>

// 名前空間省略
using namespace std;

// void swap(int *a, int *b)
// {
// 	int temp;
// 	temp = *a;
// 	*a = *b;
// 	*b = temp;
// }

// int partition(int array[], int l, int r, int num[])
// {
// 	int pivot = array[r];
// 	int i = (l-1);
// 	for(int j=l; j<=r-1;j++){
// 		if(array[j] >= pivot){
// 			i++;
// 			swap(&array[i],&array[j]);
// 			swap(&num[i],&num[j]);
// 		}
// 	}
// 	swap(&array[i+1], &array[r]);
// 	swap(&num[i+1],&num[r]);
// 	return (i+1);
// }

// void quickSort(int array[], int l, int r, int num[])
// {
// 	if(l < r){
// 		int pivot = partition(array, l, r, num);
// 		quickSort(array, l, pivot - 1, num);
// 		quickSort(array, pivot + 1, r, num);
// 	}
// }

// メイン関数
int main()
{
	// 標準入出力　高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n;
	cin >> n;
	long long *a = new long long[n+1];
	// int *b = new int[n+1];
	vector<bool> c(n+1,false);

	for(int i=1;i<=n;i++){
		// b[i]=i;
		cin >> a[i];
	}

	//quickSort(a,1,n,b);

	// for(int i=1;i<=n;i++) cout << a[i] << " " << b[i] << endl;

	int min=1;
	int max=n;
	long long sum=0;

	for(int i=1;i<=n;i++){
		int k=0;
		bool flag=false;
		long long c_max=0;

		for(int j=1;j<=n;j++){
			if(c[j]==true) continue;

			if(abs(j-min) < abs(j-max)){
				if(c_max < (long long)a[j] * abs(j-max)){
					c_max = (long long)a[j] * abs(j-max);
					flag = true;
					k=j;
				}
			}
			else{
				if(c_max < (long long)a[j] * abs(j-min)){
					c_max = (long long)a[j] * abs(j-min);
					flag =false;
					k=j;
				}
			}
		}
		// cout << "c_max: " << c_max  << " " << k << " " << flag << endl;

		sum += c_max;
		if(flag == true) max--;
		if(flag == false) min++;
		c[k] = true;

		// if(abs(b[i]-min) < abs(b[i]-max)){
		// 	sum += (long long) a[i] * abs(b[i]-max);
		// 	max--;
		// }
		// else{
		// 	sum += (long long) a[i] * abs(b[i]-min);
		// 	min++;
		// }
	}

	cout << sum << endl;
}
