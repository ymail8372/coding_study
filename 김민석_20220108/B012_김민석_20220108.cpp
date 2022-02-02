#include <iostream>

using namespace std;

struct node {
    node *right;
    node *left;
    int value;
};

node* insert(node *root, int num);
void show(node *n);

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    int input = 0;
	node* root = NULL;

    while (cin >> input) {
		root = insert(root, input);
    }

	show(root);

	delete root;

    return 0;
}

node* insert(node *root, int num) {
	if (root == NULL) {
		root = new node();
		root->value = num;
		root->left = NULL;
		root->right = NULL;
	}
	else if (num <= root->value) {
		root->left = insert(root->left, num);
	}
	else {
		root->right = insert(root->right, num);
	}

	return root;
}

void show(node *n) {
	if (n->left != NULL) {
		show(n->left);
	}
	if (n->right != NULL) {
		show(n->right);
	}
	cout << n->value << "\n";
}
