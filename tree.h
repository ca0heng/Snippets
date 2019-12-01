//
// Created by 曹衡 on 2019/10/17.
//

struct TreeNode;
typedef struct TreeNode *PtrToNode;

PtrToNode make_empty(PtrToNode tree);

PtrToNode find(int e, PtrToNode tree);

PtrToNode find_min(PtrToNode tree);

PtrToNode find_max(PtrToNode tree);

PtrToNode insert(int e, PtrToNode tree);


