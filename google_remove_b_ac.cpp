#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		for(int i = 0; s[i]; ){
			if(s[i]=='b') s.erase(i,1);
			else if(s[i]=='a' && s[i+1]=='c') s.erase(i,2);
			else i++;
		}
		cout<<s<<endl;
/*		int i = 0;
		s.erase(i,1);
		printf("%d\n", i);
		cout<<s<<endl;
		cout<<s[i]<<endl;*/
	}
	return 0;
}