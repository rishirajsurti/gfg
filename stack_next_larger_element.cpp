#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		vector<int> a(n);
		for(int i = 0; i < n; scanf("%d", &a[i++]));
		
		stack<int> s;
		map<int, int> m;
		s.push(a[0]);
		int element, next;
		for(int i = 1; i < n; i++){
			next = a[i];
			if(!s.empty()){
				element = s.top(); s.pop();
				while(element < next){
//					printf("%d ", next);
					m[element] = next;
					if(s.empty()) break;
					element = s.top(); s.pop();
				}


				if(element > next) s.push(element);

			}
			s.push(next);
		}

		while(!s.empty()){
			m[s.top()] = -1;
			s.pop();
		}

		for(int i = 0; i < n; i++)
			printf("%d ", m[a[i]]);
		printf("\n");
/*		stack<int> s1, s2;
		int cur_element;
		int i = a.size()-1;
		s1.push(a[i]); s2.push(-1);
		cur_element = a[i];
		i--;
		for(; i>=0; i--){
			if(a[i] > cur_element){
				s1.push(a[i]); s2.push(-1);
				cur_element = a[i];
			}
			else{
				s1.push(a[i]); s2.push(cur_element);
			}
		}

		while(!s2.empty()){
			printf("%d ", s2.top());
			s2.pop();
		}
		printf("\n");*/
	}

	return 0;
}