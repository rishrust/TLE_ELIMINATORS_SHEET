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

		vector<int>ans{};
		ans.push_back(arr[0]);

		for(int i=1; i<n; i++){
			if(arr[i-1]<=arr[i]){
				ans.push_back(arr[i]);
			}

			else{
				ans.push_back(arr[i]);
				ans.push_back(arr[i]);
			}
		}
		cout<<ans.size()<<endl;
		for(auto i:ans)cout<<i<<" ";cout<<endl;


		t--;
	}	
}
