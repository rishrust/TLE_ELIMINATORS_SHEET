#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


using namespace std;

#define vex(arr,n) \
		for(int i=0; i<n; i++) cin>>arr[i];
#define gvsm(arr,sm)\
		for(int i=0; i<arr.size(); i++)sm+=arr[i];


void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}

int main(){
	init_code();
	int t{};
	cin>>t;
	while(t){
		int n{};
		cin>>n;
		vector<int>arr(n-1,0);
		vex(arr,n-1);

		int sm{};
		gvsm(arr,sm);

		cout<<(-1*(sm))<<endl;

		t--;
	}	
}
