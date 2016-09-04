#include <bits/stdc++.h>
using namespace std;

int main(){
	bitset<5> bs(6);
	cout<<bs<<endl;
	for(int i = 0; i < bs.size(); i++)
		cout<<bs[i];
	printf("\n");
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
vector<int> toBinary(int n){
	vector<int> ans;
	while(n){
		ans.push_back(n%2);
		n /= 2;
	}
	reverse(ans.begin(), ans.end());
	return ans;
}

int main(){
	vector<int> a;
	a = toBinary(8);
	for(int i= 0; i < a.size(); i++)
		printf("%d", a[i]);
	printf("\n");
	return 0;
}*/