
#include <stdio.h>
#include "../tree/tree.h"

void preorder_dfs_print(struct TreeNode *node){
    printf("%c ", node->value);

    if (node->left != 0) {
        preorder_dfs_print(node->left);
    }

    if (node->right != 0) {
        preorder_dfs_print(node->right);
    }
}

void in_order_dfs_print(struct TreeNode *node){
    if (node->left != 0) {
        in_order_dfs_print(node->left);
    }

    printf("%c ", node->value);

    if (node->right != 0) {
        in_order_dfs_print(node->right);
    }
}

void postorder_dfs_print(struct TreeNode *node){
    if (node->left != 0) {
        postorder_dfs_print(node->left);
    }

    if (node->right != 0) {
        postorder_dfs_print(node->right);
    }

    printf("%c ", node->value);
}