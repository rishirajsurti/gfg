#include <bits/stdc++.h>
using namespace std;
bool cmp(int i){
	return i%2==0;
}
int main(){
	int n; scanf("%d", &n);
	vector<int> a(n);
	for(int i =0 ; i < n; scanf("%d", &a[i++]));

	vector<int>::iterator it = partition(a.begin(), a.end(), cmp);
	for(int i =0; i < n; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}