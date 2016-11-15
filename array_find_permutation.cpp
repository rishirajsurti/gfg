#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

void findPerm(string a, int b) {
    vi ans(b, 1);
    map<int, bool> used;
    used[1] = true;
    for(int i = 0; a[i]; i++){
        if(a[i] == 'I'){
            ++ans[i+1];
            while(used.find(ans[i+1]) != used.end()) ++ans[i+1];
            used[ans[i+1]] = true;
            //printf("ans[%d] = %d\n", i, ans[i+1]);
        }
        else if(a[i] == 'D'){
            --ans[i+1];

            while(used.find(ans[i+1]) != used.end()) --ans[i+1];
            used[ans[i+1]] = true;
            //printf("ans[%d] = %d\n", i, ans[i+1]);


        }
    }
    int minele = *min_element(ans.begin(), ans.end());
    if(minele < 1){
       // minele--;
        minele = abs(minele);
        minele++;
        for(int i = 0; i < ans.size(); i++)
            ans[i] += minele;
    }
    
    //return ans;
    /*for(int i = 0; i< ans.size(); i++)
    	printf("%d ", ans[i]);
    printf("\n");*/
}

int main(){
	string a = "ID";
	int b = 3;
	findPerm(a, b);
	return 0;
}