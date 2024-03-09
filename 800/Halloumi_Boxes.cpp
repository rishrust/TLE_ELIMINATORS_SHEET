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
        int k{};

        cin>>n; cin>>k;
        vector<int> arr{};
        for(int i=0; i<n; i++){
            int tmp{};
            cin>>tmp;
            arr.push_back(tmp);
        }        

        vector<int>buff{};
        buff=arr;
        sort(buff.begin(),buff.end());

        if(buff == arr)
            cout<<"YES"<<endl;
        else if(k==1)
            cout<<"NO"<<endl;
        else 
            cout<<"YES"<<endl;

        arr.clear();
        t--;
    }
}
