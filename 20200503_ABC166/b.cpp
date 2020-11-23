#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int n,k;
	cin >> n >> k;

	vector<bool> a(n, false);

	for(int i=0;i<k;i++){
		int d;
		cin >> d;
		for(int j=0;j<d;j++){
			int data;
			cin >> data;
			a[data-1] = true;
		}
	}

	int count = 0;
	for(int i=0;i<n;i++){
		if(a[i] == false) count++;
	}
	cout << count << "\n";
}
