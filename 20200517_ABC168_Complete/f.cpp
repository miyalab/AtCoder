#include<bits/stdc++.h>
using namespace std;
constexpr long long mod=1000000007;
constexpr long long mod998=998244353;


int N,M,A[1000],B[1000],C[1000],D[1000],E[1000],F[1000];
long long res;
vector<long long>H,W;
vector<vector<int>>U,L;
vector<vector<bool>>vis;

int id(vector<long long>&V,long long x){
	return lower_bound(V.begin(),V.end(),x)-V.begin();
}

int main(){
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>A[i]>>B[i]>>C[i];
	}
	for(int i=0;i<M;i++){
		cin>>D[i]>>E[i]>>F[i];
	}
	for(int i=0;i<N;i++){
		H.push_back(A[i]);
		H.push_back(B[i]);
		W.push_back(C[i]);
	}
	for(int i=0;i<M;i++){
		H.push_back(D[i]);
		W.push_back(E[i]);
		W.push_back(F[i]);
	}
	H.push_back(0);
	W.push_back(0);
	H.push_back(-1111111111);
	H.push_back(1111111111);
	W.push_back(-1111111111);
	W.push_back(1111111111);
	sort(H.begin(),H.end());
	sort(W.begin(),W.end());
	H.erase(unique(H.begin(),H.end()),H.end());
	W.erase(unique(W.begin(),W.end()),W.end());
	U=L=vector<vector<int>>(H.size(),vector<int>(W.size(),0));
	vis=vector<vector<bool>>(H.size(),vector<bool>(W.size(),false));
	for(int i=0;i<N;i++){
		L[id(H,A[i])][id(W,C[i])]++;
		L[id(H,B[i])][id(W,C[i])]--;
	}
	for(int i=0;i<M;i++){
		U[id(H,D[i])][id(W,E[i])]++;
		U[id(H,D[i])][id(W,F[i])]--;
	}
	for(int i=1;i<H.size()-1;i++){
		for(int j=1;j<W.size()-1;j++){
			L[i][j]+=L[i-1][j];
			U[i][j]+=U[i][j-1];
		}
	}
	queue<pair<int,int>>que;
	que.push({id(H,0),id(W,0)});
	while(!que.empty()){
		int x,y;
		x=que.front().first;
		y=que.front().second;
		que.pop();
		if(x==0||x==H.size()-1||y==0||y==W.size()-1){
			puts("INF");
			return 0;
		}
		if(!vis[x][y]){
			vis[x][y]=true;
			res+=(H[x+1]-H[x])*(W[y+1]-W[y]);
			if(!U[x][y])que.push({x-1,y});
			if(!L[x][y])que.push({x,y-1});
			if(!U[x+1][y])que.push({x+1,y});
			if(!L[x][y+1])que.push({x,y+1});
		}
	}
	cout<<res<<endl;
}
