#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s1, s2;
		cin>>s1;
		cin>>s2;
		map<char,int> m;
		for(int i = 0; i < s2.size(); i++)
			m[s2[i]] =1 ;

		for(int i = 0; i < s1.size(); i++){
			if(m.find(s1[i]) == m.end())
				cout<<s1[i];
		}
		cout<<endl;
	}
   return 0;
}