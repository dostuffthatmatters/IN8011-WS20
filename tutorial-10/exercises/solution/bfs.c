
#include <stdio.h>
#include <stdlib.h>
#include "../tree/tree.h"

void bfs_recursion_util(struct TreeNode *node, int depth_left);
int get_tree_height(struct TreeNode *root);

void bfs_print(struct TreeNode *node){
    int tree_height = get_tree_height(node);

    // Loop over all levels
    for (int i = 0; i<=tree_height; i++) {
        bfs_recursion_util(node, i);
    }
}

void bfs_recursion_util(struct TreeNode *node, int depth_left){
    if (depth_left == 0) {
        printf("%c ", node->value);
    } else {
        if (node->left != 0) {
            bfs_recursion_util(node->left, depth_left - 1);
        }
        if (node->right != 0) {
            bfs_recursion_util(node->right, depth_left - 1);
        }
    }
}

int get_tree_height(struct TreeNode *root) {
    int height = 0;

    if (root->left != 0) {
        height = 1 + get_tree_height(root->left);
    }

    if (root->right != 0) {
        int height_right = 1 + get_tree_height(root->right);
        if (height_right > height) {
            height = height_right;
        }
    }

    return height;
}





// You could also use a Queue to do bfs. Using a Queue would 
// be more efficient but requries you to implement a Queue
// datastructure first.

struct Queue {
    struct QueueNode *head;
};

struct QueueNode {
    struct TreeNode *node;
    struct QueueNode *next;
};

void enqueue(struct Queue *queue, struct TreeNode *node) {
    struct QueueNode *queue_node = calloc(sizeof(struct QueueNode), 1);
    queue_node->node = node;

    if (queue->head == 0) {
        queue->head = queue_node;
    } else {
        struct QueueNode *tail = queue->head;
        while (tail->next != 0) {
            tail = tail->next;
        }
        tail->next = queue_node;
    }
}

struct TreeNode *dequeue(struct Queue *queue) {
    if (queue->head == 0) {
        return 0;
    } else {
        struct QueueNode *tmp_queue_node = queue->head;
        struct TreeNode *tmp_tree_node = queue->head->node;
        queue->head = queue->head->next;
        free(tmp_queue_node);
        return tmp_tree_node;
    }
}

void bfs_queue_print(struct TreeNode *root){
    struct Queue queue = {0};
    enqueue(&queue, root);

    while (queue.head != 0) {
        struct TreeNode *node = dequeue(&queue);
        if (node->left != 0) {
            enqueue(&queue, node->left);
        }
        if (node->right != 0) {
            enqueue(&queue, node->right);
        }
        printf("%c ", node->value);
    }
}