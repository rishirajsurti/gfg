#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		string s;
		cin>>s;
		vector<string> a;
		for(int i = 0; i < s.size(); i++){
			for(int j = 1; j <= s.size()-i; j++){
				//cout<<s.substr(i,j)<<endl;
				a.push_back(s.substr(i,j));
			}
		}
		map<int, int> m;
		bool ok = true;
		for(int i = 0; i < a.size(); i++){
			int n;
			istringstream(a[i]) >> n;
//			cout<<"Number: "<<n<<endl;
			int ans =1;
			if(n)	
				while(n) ans *= (n%10), n/=10;
			else 
				ans = n;
//			cout<<"Ans "<<ans<<endl;
			if(m.find(ans) == m.end())
				m[ans] = 1;
			else
				ok = false;
		}
		printf("%d\n", ok);

	}
	return 0;
}