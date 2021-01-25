
#include <stdio.h>

#include "../tree/tree.h"
#include "bfs.c"
#include "dfs.c"

int main() {

    struct TreeNode *root = init_node('A');

    // Left: Subtree B
    add_left_child(root, 'B');

    add_left_child(root->left, 'D');
    add_right_child(root->left, 'E');


    // Right: Subtree of C
    add_right_child(root, 'C');

    add_left_child(root->right, 'F');
    add_right_child(root->right, 'G');

    add_left_child(root->right->left, 'H');

    add_left_child(root->right->left->left, 'I');
    add_right_child(root->right->left->left, 'J');

    add_left_child(root->right->left->left->left, 'K');
    add_right_child(root->right->left->left->left, 'L');

    print_tree(root);

    printf("\n\n------------------------------\nBFS\n");
    printf("A B C D E F G H I J K L (Solution)\n");
    bfs_print(root);
    printf("\n");
    bfs_queue_print(root);

    printf("\n\n------------------------------\nPreorder DFS\n");
    printf("A B D E C F H I K L J G (Solution)\n");
    preorder_dfs_print(root);

    printf("\n\n------------------------------\nIn-Order DFS\n");
    printf("D B E A K I L H J F C G (Solution)\n");
    in_order_dfs_print(root);

    printf("\n\n------------------------------\nPostorder DFS\n");
    printf("D E B K L I J H F G C A (Solution)\n");
    postorder_dfs_print(root);

    return 0;
}
