#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
#include <iostream>

using namespace std;

#define info(p) (p)->info
#define left(p) (p)->left
#define right(p) (p)->right

typedef int infotype;

typedef struct Node *adrNode;

struct Node{
    infotype info;
    adrNode left;
    adrNode right;
};

adrNode newNode_1301213229(infotype x);
adrNode findNode_1301213229(adrNode root, infotype x);
void insertNode_1301213229(adrNode &root, adrNode p);
void printPreOrder_1301213229(adrNode root);
void printDescendant_1301213229(adrNode root, infotype x);
int sumNode_1301213229(adrNode root);
int countLeaves_1301213229(adrNode root);
int heightTree_1301213229(adrNode root);

#endif // TREE_H_INCLUDED
