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
		vector<vector<int>> arr(5,vector<int>(10,0));


		for(int i=0;i<5; i++){
			for(int j=0; j<10; j++){
				if(i==0 || j==0 ||  j== 9)
						arr[i][j]=1;
				
				else if( (i==1 && (j>=1 && j<=8)) || (j==1 && (i>=1 && i<=4)) || (j==8 && (i>=1 && i<=4)) )
						arr[i][j]=2;

				else if((i==2 && (j>=2 && j<=7))  || (j==2 && (i>=2 && i<=4)) || (j==7 && (i>=2 && i<=4)) )
						arr[i][j]=3;

				else if((i==3 && (j>=3 && j<=6))  || (j==3 && (i>=3 && i<=4))  || (j==6 && (i>=3 && i<=4)))
						arr[i][j]=4;

				else if(i==4 && (j>=4 && j<=5))
					arr[i][j]=5;
			}
		}

		int score{};
		for(int i=0; i<5; i++){
			for(int j=0; j<10; j++){
				char tmp{};cin>>tmp;
				if(tmp=='X')score+=arr[i][j];
			}
		}


		for(int i=4; i>=0; i--){
			for(int j=0; j<10; j++){
				char tmp{};cin>>tmp;
				if(tmp=='X')score+=arr[i][j];
			}
		}

		cout<<score<<endl;


		t--;

	}	
}


