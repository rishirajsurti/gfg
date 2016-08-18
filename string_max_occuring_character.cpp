#include <bits/stdc++.h>
using namespace std;
#define MAX 256
int main(){
	int t; scanf("%d", &t);
	while(t--){
		char s[MAX];
		scanf("%s", s);
		int len = strlen(s);
		int c[MAX] = {0};
		for(int i = 0; i < len; i++)
			count[(int)s[i]]++;

		int max = -1;
		char result;
		for(int i = 0; i < len; i++){
			if(max < count[(int)s[i]]){
				max = count[(int)s[i]];
				result = s[i];
			}
		}
		printf("%c\n", result);
/*		string s;
		cin>>s;
*//*		vector<int> a(MAX, 0);
		for(int i = 0; s[i]; i++)
			++a[(int)s[i]];

		printf("%d\n", *max_element(a.begin(), a.end()));*/
/*		int idx = 0, count = 1;
		for(int i = 1; s[i]; i++){
			if(s[i] == s[idx]) count++;
			else count--;
			if(count == 0) idx = i;
		}*/
		//now idx contains max occuring
		//check if any other lexi.. smaller character
//		cout<<s[idx]<<endl;
/*		int count2 = 1;
		int idx2 = 0;
		for(int i = 1; s[i]; i++){
			if(s[i] >= s[idx]) continue;
			if(s[i] == s[idx2]) count2++;
			else count2--;
			if(count2==0) idx2 = i;
		}

		if(count == count2){
			if(s[idx] < s[idx2]) cout<<s[idx]<<endl;
			else cout<<s[idx2]<<endl;
		}
		else if(count > count2)
			cout<<s[idx]<<endl;
		else if(count < count2)
			cout<<s[idx2]<<endl;*/
	}
	return 0;
}