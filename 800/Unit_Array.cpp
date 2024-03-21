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
		int neg{},pos{};
		neg=0;pos=0;
		for(int i=0; i<n; i++){
			int tmp{};
			cin>>tmp;
			if(tmp==-1)neg++;
			else pos++;
		}
		int ans= (-1*neg + pos);

		if(ans>=0){
			if(neg%2==0)cout<<0<<endl;
			else cout<<1<<endl;
		}

		else{
			int f=  abs(ans/2) + abs(ans%2);


			if((neg-f)%2 ==0)cout<<f<<endl;
			else cout<<f+1<<endl;
		}




		t--;

	}	
}
