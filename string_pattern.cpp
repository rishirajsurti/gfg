#include <bits/stdc++.h>
using namespace std;

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		string s,p;
		cin>>s;
	}

}
/*#include <bits/stdc++.h>
using namespace std;

bool found(string s, string p){
	int ns = s.length(), np = p.length();
	int i,j;
	for(i =0 ; i < ns; i++){

		for(j = 0; j < np; j++){
			if(i+j>= ns || s[i+j] != p[j]) break;
		}
		if(j==np) return true;
	}
	return false;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s,p;
		cin>>s;
		cin>>p;
		if(found(s,p))
			printf("found\n");
		else
			printf("not found\n");
	}
	return 0;
}*/