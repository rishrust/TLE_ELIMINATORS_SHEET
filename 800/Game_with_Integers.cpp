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

		if(n%3 ==0)cout<<"Second"<<endl;
		else if((n-1)%3 ==0 || (n+1)%3 ==0)
			cout<<"First"<<endl;

		t--;
	}

}
