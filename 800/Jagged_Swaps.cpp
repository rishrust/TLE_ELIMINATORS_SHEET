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
		vector<int>arr{};
		int n{};
		arr={};
		cin>>n;


		for(int i=0; i<n; i++){
			int tmp{};
			cin>>tmp;

			arr.push_back(tmp);
		}

		
		bool ans=true;
		for(int i=n; i>=1; i--){
			if(arr[0]==i && arr.size()!=1)
				{ans=false; break;}

			for(int j=0; j<arr.size(); j++)
				if(arr[j]==i)
					{arr.erase(arr.begin()+j); break;}
			
		}

		if(ans)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;


		t--;
	}
	
}





