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
		int a{},b{},c{};
		cin>>a>>b>>c;

		
		a+= c/2 +(c%2);
		b+= c/2;
		

		if(a<=b)cout<<"Second"<<endl;
		if(a>b)cout<<"First"<<endl;

		t--;
	}	
}
