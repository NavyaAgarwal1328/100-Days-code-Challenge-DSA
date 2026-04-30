#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int val) {
    struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    node->val = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void inorder(struct TreeNode* root) {
    if (root == NULL)
        return;

    inorder(root->left);      // Left
    printf("%d ", root->val); // Root
    inorder(root->right);     // Right
}

int main() {

    // Creating the tree:
    //     1
    //      \
    //       2
    //      /
    //     3

    struct TreeNode* root = createNode(1);
    root->right = createNode(2);
    root->right->left = createNode(3);

    printf("Inorder Traversal: ");
    inorder(root);

    return 0;
}