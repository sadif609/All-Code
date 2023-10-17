
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m,sum=0;
		cin>>n>>m;
		int a[n][m];
		map<int,int>d1,d2;
		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++){
				cin>>a[i][j];
			    d1[i+j] += a[i][j];
			    d2[i-j] += a[i][j];
			    cout<<d1[i+j]<<" "<<d1[i-j]<<endl;
			}
		}

		for(int i=0; i<n; i++){
			for(int j=0; j<m; j++)
				sum = max(d1[i+j]+d2[i-j]-a[i][j], sum);
			}
			cout<<sum<<endl;

	}


	return 0;
}
