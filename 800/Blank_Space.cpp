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

int main(){
	init_code();
	int t{}; cin>>t;

	while(t){
		int n{};
		cin>>n;
		vector<int>arr(n,0);
		int mx{-1},ln{};
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]==0)ln++;
			else ln=0;

			mx=max(mx,ln);
		}

		cout<<mx<<endl;
		




		t--;
	}
}
