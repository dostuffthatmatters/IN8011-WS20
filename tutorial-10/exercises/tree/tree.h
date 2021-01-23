#ifndef TREE_H
#define TREE_H

struct TreeNode {
    char value;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *init_node(char value);
void remove_node(struct TreeNode *node);

struct TreeNode *add_left_child(struct TreeNode *node, char value);
struct TreeNode *add_right_child(struct TreeNode *node, char value);

void remove_left_child(struct TreeNode *node);
void remove_right_child(struct TreeNode *node);

void print_tree(struct TreeNode *root);

#endif
