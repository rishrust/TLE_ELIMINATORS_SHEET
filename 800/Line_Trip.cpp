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
	sd
	init_code();
	int t{};
	cin>>t;

	while(t){
		int n,x;
		cin>>n;
		cin>>x;

		vector<int>arr{};

		arr.push_back(0);
		for(int i=0; i<n; i++){
			int tmp{};
			cin>>tmp;
			arr.push_back(tmp);
		}
		
		int mx{};

		for(int i=0; i<n; i++){
			int t{};
			t=arr[i+1]-arr[i];

			mx=max(mx,t);
		}

		mx= max(mx, 2* (x-arr[n]));

		cout<<mx<<endl;



		arr.clear();
		t--;
	}
}
