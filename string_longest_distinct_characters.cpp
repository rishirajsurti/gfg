#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
int main(){
    int t; scanf("%d", &t);
    while(t--){
        string s;
        cin>>s;
        map<char, int> m;
        int ans = 1;
        int cur_len = 1, prev_idx ;
        m[s[0]] = 0;
        
        for(int i = 1 ; i < s.length(); i++){

            if(m.find(s[i]) == m.end()){
                m[s[i]] = i;
                cur_len++;
            }
            else{
                if(i-cur_len > m[s[i]]){
                    cur_len++;
                    m[s[i]] = i;
                }
                else {
                    if(cur_len > ans)
                        ans = cur_len;
                    cur_len = i - m[s[i]];
                    m[s[i]] = i;
                }
            }

        }
        ans = max(ans, cur_len);
        printf("%d\n", ans);
    }
    return 0;
}