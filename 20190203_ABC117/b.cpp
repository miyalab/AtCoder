#include <iostream>

using namespace std;

int main()
{
	int n;

	cin >> n;

	int *L = new int[n];

	int sum = 0;
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> L[i];
		if (max < L[i]) {
			sum += max;
			max = L[i];
		}
		else {
			sum += L[i];
		}
	}

	if (max < sum) cout << "Yes" << endl;
	else cout << "No" << endl;
}
