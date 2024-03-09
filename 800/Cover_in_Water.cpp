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
	cin >>t;



	while(t){
		int n{};
		cin>>n;

		vector<int> arr{};
		for(int i=0; i<n; i++){
			char tmp{};
			cin>>tmp;
			if(tmp=='.'){
				arr.push_back(0);
			}
			else{
				arr.push_back(1);
			}
		}
		int i=0; i=0;
		int ans{}; ans=0;
		bool inf{};
		inf=false;

		while(i<n){
			if(arr[i]==1){
				i++;
				continue;
			}
			if(arr[i]==0){
				int j=i+1;
				while(j<n && arr[j]!=1)
						j++;
				if(j-i >=3 ){
					ans=2;
					inf=true;
					break;
				}
				else
					ans+= j-i;
				i=j;
			}
			if(inf)break;
		}
		cout<<ans<<endl;
		t--;
	}	
}
