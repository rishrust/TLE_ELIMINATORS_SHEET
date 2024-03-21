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
	int t{};
	cin>>t;
	while(t){
		int n{};
		cin>>n;
		vector<int>arr(n,0);
		for(int i=0; i<n; i++)cin>>arr[i];


		sort(arr.begin(),arr.end());

		int mx=arr[n-1];
		int br{-1};br=-1;

		vector<int>b{},c{};

		for(int i=n-1; i>=0; i--){
			if(arr[i]==mx)c.push_back(arr[i]);
			else{
				br=i;
				break;
			}
		}

			if(br==-1) cout<<(-1)<<endl;
			else{
				for(int i=0; i<=br; i++)
					b.push_back(arr[i]);

				cout<<b.size()<<' '<<c.size()<<endl;
				for(auto i:b)cout<<i<<' ';cout<<endl;
				
				for(auto i:c)cout<<i<<' ';cout<<endl;
			}



		t--;
	}
}
