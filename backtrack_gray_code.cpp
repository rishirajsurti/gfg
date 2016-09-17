vector<int> Solution::grayCode(int a) {
    // Do not writeN main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> ans;
    ans.push_back(0);
    for(int i =0; i < a; i++){
        int size = ans.size();
        for(int j = size-1; j >=0; j--){
            ans.push_back(ans[j]+size);
        }
    }
    return ans;
}