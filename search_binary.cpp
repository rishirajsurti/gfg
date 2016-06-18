#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool BinarySearch(vector<int> a , int key);
int main(){
	int n;
	cout<<"enter size:"<<endl;
	cin>>n;
	vector<int> a;
	int i,j;
	cout<<"enter array:"<<endl;
	for(i=0; i<n; i++){
		cin>>j;
		a.push_back(j);
	}
	cout<<BinarySearch(a,3)<<endl;
}

bool BinarySearch(vector<int> a , int key){
	
	if(a.size()==0)
		return false;
	
	int i,s;
	s = (a.size()/2);
	if(key == a[s])
		return true;
	if(key < a[s]){
		vector<int>::const_iterator first = a.begin();
		vector<int>::const_iterator last = a.begin()+s;
		vector<int> newv(first,last);
		return BinarySearch(newv,key);
	}
	else{
		vector<int>::const_iterator first = a.begin()+s+1;
		vector<int>::const_iterator last = a.end();
		vector<int> newv(first,last);
		return BinarySearch(newv,key);
	}
}