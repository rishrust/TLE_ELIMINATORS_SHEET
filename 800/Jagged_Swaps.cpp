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
	string s{};
	s.push_back('s');
	
	unordered_map<string,int>mp{};
	mp[s]++;
	cout<<mp[s]<<endl;

}
