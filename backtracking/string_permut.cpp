#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	s = "cccc";
	// do{
	// 	cout<<s<<endl;
	// } while(next_permutation(s.begin(), s.end()));
	// //unique permutations

	// if number of permutations is less
	// next_permutation edits the string in place
	//so just put a command of next_permutation
	//and reiterate using do-whileloop
	vector<string> a;
	do{
		a.push_back(s);
	} while(next_permutation(s.begin(), s.end()));
	
	int i;
	
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<endl;
	
	cout<<"Unique:"<<endl;
	vector<string>::iterator it;
	it = unique(a.begin(), a.end());
	a.resize(distance(a.begin(), it));
	for(i=0; i<a.size(); i++)
		cout<<a[i]<<endl;

	return 0;
}