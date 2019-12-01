#include <stdlib.h>
#include "tree.h"


struct TreeNode {
    int e;
    PtrToNode left;
    PtrToNode right;
};


PtrToNode make_empty(PtrToNode tree) {
    if (tree != NULL) {
        make_empty(tree->left);
        make_empty(tree->right);
        free(tree);
    }
    return NULL;
}


PtrToNode find(int e, PtrToNode tree) {
    if (tree == NULL)
        return NULL;

    if (e < tree->e)
        return find(e, tree->left);
    else if (e > tree->e)
        return find(e, tree->right);
    else
        return tree;
}


PtrToNode find_min(PtrToNode tree) {
    if (tree == NULL)
        return NULL;
    else if (tree->left == NULL)
        return tree;
    else
        return find_min(tree->left);
}

PtrToNode find_max(PtrToNode tree) {
    if (tree == NULL)
        return NULL;
    else if (tree->right == NULL)
        return tree;
    else
        return find_max(tree->right;
}


PtrToNode insert(int e, PtrToNode tree) {
    if (tree == NULL) {
        tree = malloc(sizeof(struct TreeNode));
//        if (tree == NULL)
        tree->e = e;
        tree->left = tree->right = NULL;
    } else if (e < tree->e)
        tree->left = insert(e, tree->left);
    else if (e > tree->e)
        tree->right = insert(e, tree->right);
}

