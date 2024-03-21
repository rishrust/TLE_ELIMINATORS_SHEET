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
	int n{};
	cin>>n;

	int tmp{};
	int mi{INT_MAX};
	for(int i=0; i<n; i++){
		cin>>tmp;
		if(tmp<0)
			mi= min(mi, -1*tmp);
		else mi=min(mi, tmp);
	}

	cout<<mi<<endl;
}
