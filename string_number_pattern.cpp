#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
	int t; scanf("%d\n", &t);
	while(t--){
		string line;
		getline(cin, line);
		int n = line.length();
		reverse(line.begin(), line.end());
		for(int i = 0; i < line.length(); i++){
			if(line[i] == 'I') line[i] = 'D';
			else line[i] = 'I';
		}
		set<int> used;

		vi a(n+1, 0);
		used.insert(0);
		for(int i = 1; i <= n; i++){
			if(line[i-1] == 'D'){
				int to_be_used = a[i-1]-1;
				if(used.find(to_be_used) != used.end()){
					while(used.find(to_be_used) != used.end())
						to_be_used--;			
				}
				a[i] = to_be_used;
				used.insert(to_be_used);
			}
			else if(line[i-1] == 'I'){
				int to_be_used = a[i-1] + 1;
				if(used.find(to_be_used) != used.end()){
					while(used.find(to_be_used) != used.end())
						to_be_used++;			
				}
				a[i] = to_be_used;
				used.insert(to_be_used);	
			}
		}
		int retmin = *min_element(a.begin(), a.end());
		
		retmin = abs(retmin);
		retmin++;

		for(int i = 0; i < a.size(); a[i++]+=retmin);
//		reverse(a.begin(), a.end());
		for(int i = 0; i < a.size(); i++)
			printf("%d", a[i]);
		printf("\n"); 
	}
	return 0;
}