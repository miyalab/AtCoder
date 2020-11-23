#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	unsigned int n,m;
	cin >> n >> m;

	vector<unsigned long> h(n);
	vector<unsigned int> hflag(n, true);
	for(unsigned int i=0;i<n;i++) cin >> h[i];

	unsigned int a, b;
	for(unsigned int i=0;i<m;i++){
		cin >> a >> b;
		if(h[a-1] < h[b-1]){
			hflag[a-1] = false;
			// hflag[b-1] = true;
		}
		else if(h[a-1]==h[b-1]){
			hflag[a-1] = false;
			hflag[b-1] = false;
		}
		else{
			// hflag[a-1] = true;
			hflag[b-1] = false;
		}
	}

	unsigned int count = 0;
	for(unsigned int i=0;i<n;i++){
		if(hflag[i]==true) count++;
	}

	cout << count << "\n";
}
