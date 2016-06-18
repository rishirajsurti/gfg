#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(vector<int> b, vector<int> c){
	if(b[1] < c[1])
		return true;
	else return false;
}
int main(){
	int t;
	cin>>t;
	int s,e;
	vector< vector<int> > a;
	vector<int> row;
	while(t--){
		cin>>s;
		cin>>e;
		row.push_back(s);
		row.push_back(e);
		a.push_back(row);
		row.clear();
	}
	sort(a.begin(),a.end(),compare);

	for(s=0;s<a.size(); s++){
		for(e=0; e<a[s].size(); e++)
			cout<<a[s][e]<<" ";
		cout<<endl;
	}
	return 0;
}