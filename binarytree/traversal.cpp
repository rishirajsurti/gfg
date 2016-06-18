#include "/home/rishiraj/imp/headers/btree.h"

int main(){

	btree t;
	t.insert(3);
	t.insert(1);
	t.insert(5);
	//cout<<	(t.search(11))<<endl;;
	//t.print_tree();
	t.preorder_traversal();
	cout<<endl;
	t.postorder_traversal();
	cout<<endl;
	
	t.inorder_traversal();
	cout<<endl;
	return 0;
}