#include<bits/stdc++.h>
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)


using namespace std;


void init_code(){
    fast_io;
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif 
}


void solve(){
	int n,k;
	cin>>n>>k;

	vector<int>arr(n,0);
	for(int i=0; i<n; i++)
		cin>>arr[i];

	// for(auto i:arr)cout<<i<<"  ";
	for(auto i:arr){
		if(i==k){
			cout<<"YES"<<endl;
			return;
		}
	}

	cout<<"NO"<<endl;

}

int main(){
	init_code();
	int t{};
	cin>>t;


	while(t){
		solve();
		// cout<<t<<endl;
		t--;

	}
		
}

