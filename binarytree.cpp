#include <bits/stdc++.h>

using namespace std;

typedef struct node {
	int key;
	node *right;
	node *left;
} node;

node *getnode(int n) {
	node *temp = new node;
	temp -> key = n;
	temp -> right = NULL;
	temp -> left = NULL;
	return temp; 
}

node *create() {
	
}

int h;
int flag = 0;

void inorder(node *root) {
	int a = 0, b = 0;
	if (root != NULL) {
		inorder (root->left);
		if (root -> left != NULL) {
			a = root-> left -> key;
		}
		if (root-> right != NULL) {
			b = root -> right -> key;
		}
		if ((root -> key == (a + b)) && ((root -> left != NULL) && (root -> right != NULL))) {
			cout << a <<" "<< b<< endl;
			flag = 1;
		}

		inorder (root -> right);
	}
}

int hieght(node *root) {
	if (root == NULL) {
		return 0;
	}
/*	if ((root -> left != NULL) || (root -> right != NULL)) {
		h = 1 + max(hieght(root->left), hieght(root->right));
	}*/
	else {
		return (1 + max(hieght(root->left), hieght(root->right)));
		
	}
}
int main() {
	int n, k;
//	scanf ("%d", &n);

	node *root;
	root = getnode(9);
	root->left = getnode(4);
	root->right = getnode(5);
	cout << hieght(root) << endl;

	inorder(root);
	if (flag == 1) {
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}
	return 0;
}
