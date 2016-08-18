#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		set<char> a(s.begin(), s.end());
/*		for(int i = 0; i < a.size(); i++)
			printf("%c\n", a[i]);
*/	
/*		vector<char>::iterator it = unique(a.begin(), a.end(), equall());
		a.resize(distance(a.begin(), it));
		for(int i = 0; i < a.size(); i++)
			printf("%c", a[i]);	*/
/*		set<char>::iterator it;
		for(it= a.begin(); it != a.end(); it++)
			printf("%c ",(*it) );*/
		for(int i = 0; s[i]; i++){
			if(a.find(s[i]) == a.end()) continue;
			else{
				cout<<s[i];
				a.erase(s[i]);
			}
		}
		printf("\n");
	}
	return 0;
}