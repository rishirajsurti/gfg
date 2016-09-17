vector< vector<int> > ans;
vector<int> row;

void solve(int l, int r, vector<int> a){
    if(l > r) return;
    if(l==r){
        ans.push_back(a);
        return;
    }
    for(int i = l; i <= r; i++){
        swap(a[l], a[i]);
        solve(l+1, r, a);
        swap(a[l], a[i]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details

    ans.clear();
    
    vector<int> a(A.begin(), A.end());
    solve(0, a.size()-1, a);
    return ans;
    
    
}
