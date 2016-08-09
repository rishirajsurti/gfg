#include <bits/stdc++.h>
using namespace std;
typedef vector<int> vi;
vi a;
struct Node{
	int data;
	Node *left, *right;
};

void preorder(Node *root){
	if(root == NULL) return;
	printf("%d ", root->data);
	if(root->left != NULL) preorder(root->left);
	if(root->right != NULL) preorder(root->right);
	
	
}

Node* newNode(int val){
	Node *temp = (Node *)malloc(sizeof(Node));
	temp->data = val;
	temp->left = temp->right = NULL;
	return temp;
}

Node* solve(int start, int end){
	if(start > end) return NULL;
	int mid = (start+end)/2;
	struct Node *root = newNode(a[mid]);
	root->left = solve(start, mid-1);
	root->right = solve(mid+1, end);
	return root;
}

int main(){
	int t; scanf("%d", &t);
	while(t--){
		int n; scanf("%d", &n);
		a.clear();
		a.assign(n, 0);
		for(int i =0 ; i< n; scanf("%d", &a[i++]));
		sort(a.begin(), a.end());
		preorder(solve(0, a.size()-1));
		printf("\n");
	}
	return 0;
}