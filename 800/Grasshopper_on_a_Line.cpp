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
		int x,k;
		cin>>x>>k;


		if(x%k !=0){
			cout<<1<<endl;
			cout<<x<<endl;

		}
		else{
			int f{},s{};
			for(int i=x; i>=0; i--){
				if(i%x != 0){
					f=i;
					break;
				}
			}

			s= x-f;
			cout<<2<<endl;
			cout<<f<<" "<<s<<endl;
		}



		t--;
	}	
}
