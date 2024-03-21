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
		for(int i=0; i<n; i++)
			cin>>arr[i];




		int mi{INT_MAX};

		for(int i=1; i<arr.size(); i++){


			if(i==arr.size()-1){
				mi=min(arr[i]-arr[i-1],mi);
			}
			else{
			mi= min(arr[i]-arr[i-1],mi);
			mi=min(mi,arr[i+1]-arr[i]);
		}

			
		}
		if(mi==0)
			cout<<1<<endl;
		else if(mi<0)
			cout<<0<<endl;
		else
			cout<<(mi/2)+1<<endl;
		t--;
	}
}
