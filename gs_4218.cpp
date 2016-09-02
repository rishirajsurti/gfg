#include <bits/stdc++.h>
using namespace std;

int solve(int n){
	int sum =0 ;
	int layers = 0;
	while(sum < n){
		layers++;
		sum += (layers*(layers+1))/2;

	}
	return layers;
}

int main(){
	printf("%d\n",solve(4218));
	return 0;
}