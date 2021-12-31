#include <iostream>
#include "TreeHeader.h"
using namespace std;
int main()
{
	int no,dno,i;
	int a[5];
	IntBinaryTree tree;
	cout << " Enter the Tree Values. " << endl;
	for ( i = 0; i < 5; i++){
		cin >> a[i];
		tree.insertNode(a[i]);

	}
	cout << "****** Inserting Done. *********" << endl;
	cout << "************ Display For Order Traversal **********" << endl;
	cout << "Inorder traversal:\n";
	tree.showNodesInOrder();
	cout << "\nPreorder traversal:\n";
	tree.showNodesPreOrder();
	cout << "\nPostorder traversal:\n";
	tree.showNodesPostOrder();
	cout << "************************Display End*******************" << endl;
	cout << "****************Searching Start***********" << endl;
	cout << "Enter Number U want to search" << endl;
	cin >> no;
	if (tree.searchNode(no))
		cout <<"\t" <<no <<"..is found in the tree.\n";
	else
		cout << "\t" <<no << "..is not found in the tree.\n";
	cout << "*****************Searching End***********************" << endl;

	cout << "**************Deletion Start *************" << endl;
	cout << "Enter No u want to delete " << endl;
	cin >> dno;
	cout << "Deleting " << dno << "....."<< endl;;
	if (dno >a[i]){
		cout << "oops something wrong.... not deleted:" << dno   << endl;

	}
	else {
		tree.remove(dno);
	}
	
	cout << "Now, here are the nodes:\n";
	tree.showNodesInOrder();

	cout << "**********************Deletion End******************* " << endl;

 
	
	return 0;
}
