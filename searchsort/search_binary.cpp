#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Binary_Search(vector<int> a, int x){

	int n = a.size();
	int l=0, r=n-1,m;

	while(l<=r){

		m = (l+r)/2;
		
		if(x == a[m])
			return m;
		else if(x > a[m])
			l = m+1;
		else if(x<a[m])
			r = m-1;
	}	

	return -1;
}
int main(){
	vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);

	cout<<Binary_Search(a,30)<<endl;
	return 0;
}
