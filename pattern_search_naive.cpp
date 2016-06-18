#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
bool PatternSearch(string s, string p);

int main(){
	string s,p;
	s="rishiraj";
	p="ish";
	cout<<PatternSearch(s,p)<<endl;
	return 0;
}
bool PatternSearch(string s, string p){
	int ssize,psize,i,j;
	ssize = s.size();
	psize = p.size();
	for(i=0; i<(ssize-psize); i++){
		
		for(j=0; j<psize; j++){
			if(s[i+j]!=p[j])
				break;
		}
		if(j==psize)
			return true;
	}
	return false;

}