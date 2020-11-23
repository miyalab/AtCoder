#include <iostream>
#include <vector>
#include <string>
#include <cmath>

using namespace std;

inline long long nPr(int n, int r)
{
	long long ret=1;
	for(int i=0; i<r; i++) ret*=(n-i);
	return ret;
}

inline long long nCr(int n, int r)
{
	long long child=1, parent=1;
	for(int i=0;i<r; i++){
		child*=(n-i);
		parent*=(i+1);
	}
	return child/parent;
}

template <typename type>
inline void Swap(type *a, type *b)
{
	type temp = *a;
	*a = *b;
	*b = temp;
}

template <typename type>
inline int Partition(type array[], int l, int r)
{
	type pivot = array[r];
	int i= l-1;
	for(int j=i; j<r-1; j++){
		if(array[j] <= pivot){
			i++;
			Swap(&array[i], &array[j]);
		}
	}
	Swap(&array[i+1], &array[r]);
	return (i+1);
}

template <typename type>
inline void QuickSort(type array[], int l, int r)
{
	if(l<r){
		int pivot = Partition(array, l, r);
		QuickSort(array, l, pivot - 1);
		QuickSort(array, pivot+1, r);
	}
}

inline int Gcd(int a, int b)
{
	if(a < b) Swap(&a, &b);
	int d = a % b;
	do{
		a = b;
		b = d;
		d = a % b;
	}while(d!=0);
	
	return b;
}

inline int Lcm(int a, int b)
{
	return (a/Gcd(a, b)*b);
}

inline bool StringToInt(string s, long long *ret)
{
	*ret = 0;
	bool sign = false;
	int buf;
	for(int i=0;i<s.size();i++){
		switch(s[i]){
		case '0': buf=0; break;
		case '1': buf=1; break;
		case '2': buf=2; break;
		case '3': buf=3; break;
		case '4': buf=4; break;
		case '5': buf=5; break;
		case '6': buf=6; break;
		case '7': buf=7; break;
		case '8': buf=8; break;
		case '9': buf=9; break;
		case '-':
			if(i!=0) return false;
			sign = true;
			break;

		default:
			return false;
			break;
		}

		// 加算処理
		*ret *= 10;
		if(sign == false) *ret += buf;
		else *ret -= buf;
	}

	return true;
}