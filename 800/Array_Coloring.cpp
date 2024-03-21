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

		int ev{},odd{};
		for(int i=0; i<n; i++){
			cin>>arr[i];
			if(arr[i]%2 ==0)ev++;
			else odd++;
		}

		if(odd%2 == 0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;




		t--;
	}
}
