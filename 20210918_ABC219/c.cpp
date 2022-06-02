#include <bits/stdc++.h>

using namespace std;

int main()
{
	// 入出力の高速化
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	// 表示精度変更
	cout << fixed << setprecision(16);

	int n;
	string x;
	cin >> x >> n;

	vector<string> s(n);
	vector<string> ans(n);
	for (int i = 0; i < n; i++)
		cin >> s[i];

	int index;
	// 先頭文字から並び替え
	for (int j = 0; j < 10; j++)
	{
		index = 0;

		// 新アルファベット順に探索
		for (int i = 0; i < 26; i++)
		{
			// すべてのSを探索
			for (int k = index; k < n; k++)
			{
				

				// 1文字前が1つ前の文字列のものとと異なる
				if (j > 0 && k > 0)
				{
					if ((int)s[k].length() < j + 1 &&
						(int)s[k - 1].length() < j + 1 &&
						s[k - 1][j - 1] != s[k][j - 1])
					{
						index = k;
					}
				}

				// if (j > 0 && k > 0 && s[k - 1][j - 1] != s[k][j - 1])
				// {
				// 	index = k;
				// 	continue;
				// }

				// 文字なし
				if ((int)s[k].length() < j + 1)
				{
					swap(s[index], s[k]);
					index++;
					continue;
				}

				// サーチ文字と一致
				if (s[k][j] == x[i])
				{
					//cout << "swap(" << index << "," << k << ") = " << s[index] << ", " << s[k] << endl;
					swap(s[index], s[k]);
					index++;
				}
			}
		}
		// cout << "j=" << j << ": ";
		// for (int i = 0; i < (int)s.size(); i++)
		// {
		// 	cout << s[i] << ", ";
		// }
		// cout << endl;
	}

	for (int i = 0; i < (int)s.size(); i++)
	{
		cout << s[i] << endl;
	}
}
