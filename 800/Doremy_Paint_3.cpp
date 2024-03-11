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
		vector<int> arr(n,0);
		unordered_map<int,int>mp{}; 
		mp.clear();

		for(int i=0; i<n; i++ ){
			cin>>arr[i];
			mp[arr[i]]++;

		}
		
		bool ans{}; ans=false;

		if(mp.size()>2)ans=false;
		else if(mp.size() ==1)
				ans=true;

		else{
			int n1{-1},n2{-2};
			n1= (*(mp.begin())).second;
			n2=(*(++mp.begin())).second;

			if(abs(n1-n2)>1)ans=false;
			else ans=true;
		}


		if(ans)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

		t--;
	}	
}