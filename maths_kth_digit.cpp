#include <bits/stdc++.h>
using namespace std;
typedef long double ld;
ld pow(ld a, ld b){
    ld ans =1;
    while(b--)
        ans = ans*a;
    return ans;
}
int main(){
    int t; scanf("%d", &t);
    while(t--){
        ld a,b;
        int k; scanf("%lf %lf %d", &a, &b, &k);
        ld ans = pow(a,b);
        while(--k){
            ans = ans/10;
        }
        printf("%d\n", (int)ans%10);
    }
	return 0;
}