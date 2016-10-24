#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
bool first;
bool flag;

int N;
void solve(int n){
    if(n <= 0){
        printf("%d ", n); return;
    }
    printf("%d ", n);
    solve(n-5);
    printf("%d ", n);
}

int main(){
    int t; scanf("%d", &t);
    while(t--){
        scanf("%d", &N);
        first = false;
       
        solve(N);
        printf("\n");
    }
	return 0;
}
