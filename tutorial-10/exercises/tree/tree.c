
#include "tree.h"
#include <stdlib.h>
#include <stdio.h>

#define PRINT_DISTANCE 6

struct TreeNode *init_node(char value){
    struct TreeNode *new_node = calloc(sizeof(struct TreeNode), 1);
    new_node->value = value;
    return new_node;
}

void remove_node(struct TreeNode *node){
    if (node->left != 0) {
        remove_node(node->left);
    }
    if (node->right != 0) {
        remove_node(node->right);
    }
    free(node);
}

struct TreeNode *add_left_child(struct TreeNode *node, char value){
    struct TreeNode *new_child = init_node(value);
    if (node->left != 0) {
        remove_node(node->left);
    }
    node->left = new_child;
    return new_child;
}

struct TreeNode *add_right_child(struct TreeNode *node, char value){
    struct TreeNode *new_child = init_node(value);
    if (node->right != 0) {
        remove_node(node->right);
    }
    node->right = new_child;
    return new_child;
}

void remove_left_child(struct TreeNode *node){
    if (node->left != 0) {
        remove_node(node->left);
    }
    node->left = 0;
}

void remove_right_child(struct TreeNode *node){
    if (node->right != 0) {
        remove_node(node->right);
    }
    node->right = 0;
}

/**
 * Source: https://www.geeksforgeeks.org/print-binary-tree-2-dimensions/
 *
 * @param root - current root node
 * @param spaces - How much should the print be indented
 */
void print_tree_2D_util(struct TreeNode *root, int spaces){

    if (root == 0) {
        return;
    }

    // Increase distance between levels
    spaces += PRINT_DISTANCE;

    // Process right child
    print_tree_2D_util(root->right, spaces);

    // Print current node after indenting PRINT_DISTANCE
    printf("\n");
    for (int i = PRINT_DISTANCE; i < spaces; i++) {
        printf(" ");
    }
    printf("%c", root->value);

    // Process left child
    print_tree_2D_util(root->left, spaces);
}

void print_tree(struct TreeNode *root){
    print_tree_2D_util(root, 0);
}

int get_tree_max(struct TreeNode *root){
    int max = root->value;

    if (root->left != 0) {
        int max_left = get_tree_max(root->left);
        if (max_left > max) {
            max = max_left;
        }
    }

    if (root->right != 0) {
        int max_right = get_tree_max(root->right);
        if (max_right > max) {
            max = max_right;
        }
    }

    return max;
}
