#include <bits/stdc++.h>
using namespace std;
// This function uses queue data structure to print binary numbers
void generatePrintBinary(int n)
{
    // Create an empty queue of strings
    queue<string> q;
 
    // Enqueue the first binary number
    q.push("1");
 
    // This loops is like BFS of a tree with 1 as root
    // 0 as left child and 1 as right child and so on
    while (n--)
    {
        // print the front of queue
        string s1 = q.front();
        q.pop();
        cout << s1 << " ";
 
        string s2 = s1;  // Store s1 before changing it
   
        // Append "0" to s1 and enqueue it
        q.push(s1.append("0"));
 
        // Append "1" to s2 and enqueue it. Note that s2 contains
        // the previous front
        q.push(s2.append("1"));
    }
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		generatePrintBinary(n);
		printf("\n");
	}
	return 0;
}
/*#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		queue<string> q;
		q.push("1");
		while(n--){
			string s = q.front();
			cout<<s<<" ";

			q.pop();
			q.push(s+"0");
			q.push(s+"1");
		}
		cout<<endl;
	}
	return 0;
}*/

/*#include <bits/stdc++.h>
using namespace std;

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		for(unsigned long long i = 1; i <= n; i++){
			if(i > 1) printf(" ");

			if(i<2)
				cout<<bitset<1>(i);
			else if(i<4)
				cout<<bitset<2>(i);
			else if(i<8)
				cout<<bitset<3>(i);
			else if(i<16)
				cout<<bitset<4>(i);
			else if(i<32)
				cout<<bitset<5>(i);
			else if(i<64)
				cout<<bitset<6>(i);
			else if(i<128)
				cout<<bitset<7>(i);
			else if(i<256)
				cout<<bitset<8>(i);
			else if(i<512)
				cout<<bitset<9>(i);
		}
		cout<<endl;
	}
	return 0;
}*/