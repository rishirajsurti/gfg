#include <iostream>
#include <cstring>
using namespace std;

int max(int a ,int b){
	return (a>b ? a : b);
}

int KnapSack(int value[], int wt[], int W){

	//int n = sizeof(value)/ sizeof(value[0]);
	int n = 3;
	int dp[n+1][W+1];
	memset(dp,0,sizeof(dp));
	int i,j;
	int object, weight;

	for(object = 0; object<=n; object++){

		for(weight = 0; weight<=W; weight++ ){

			if(weight==0 || object==0)
				dp[object][weight] = 0;

			else{

				if(wt[object] <= W)
					dp[object][weight] = max(dp[object-1][weight], value[object-1] + dp[object-1][weight-wt[object-1]]);
				else
					dp[object][weight] = dp[object-1][weight];
			}
		}

		for(i=0; i<=n; i++){
			for(j=0; j<=W; j++)
				cout<<dp[i][j]<<" ";
			cout<<endl;
		}
		cout<<"---"<<endl;

	}
	object = n;
	weight = W;
	return dp[object][weight];
}

int main(){
	int value[] = {2,6,7};
	int wt[] = {1,2,3};
	int W = 3;
	cout<<KnapSack(value, wt, W)<<endl;
	return 0;
}