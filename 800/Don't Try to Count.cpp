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
	int test{};
	cin>>test;

	while(test){
		int n{},m{};
		cin>>n>>m;

		string x{},y{};
		cin>>x;
		cin>>y;

		int t=n;
		int cnt=0;cnt=0;
		while(t<m){
			t=t*2;
			cnt++;
		}


		for(int i=0; i<cnt; i++)
			x.append(x);

		bool chk{};
		chk=false;
		for(int i=0; i<x.size(); i++){
			if(x[i]==y[0]){
				int j=i;

				for(int k=0; k<y.size(); k++){
					if(x[j]!=y[k])
							break;
					j++;
					if(k==y.size()-1)chk=true;
				}

			}
			if(chk)break;
		}


		if(chk)cout<<cnt<<endl;
		else{
			x.append(x);
			cnt++;
			chk=false;
		for(int i=0; i<x.size(); i++){
			if(x[i]==y[0]){
				int j=i;

				for(int k=0; k<y.size(); k++){
					if(x[j]!=y[k])
							break;
					j++;
					if(k==y.size()-1)chk=true;
				}

			}
			if(chk)break;
		}
			if(chk)cout<<cnt<<endl;
			else cout<<-1<<endl;

		}











		test--;
	}	
}
