#include "Tree.h"

adrNode newNode_1301213229(infotype x){
    adrNode p = new Node;
    info(p) = x;
    left(p) = NULL;
    right(p) = NULL;
    return p;
}

adrNode findNode_1301213229(adrNode root, infotype x){
    adrNode p = root;
    while(left(p) != NULL){
        if(info(p) == x){
            return p;
        }
        p = left(p);
    }
    return p;
}

void insertNode_1301213229(adrNode &root, adrNode p){
    if(root == NULL){
        root = p;
    }else if(info(p) <= info(root)){
        insertNode_1301213229(left(root),p);
    }else if(info(p) > info(root)){
        insertNode_1301213229(right(root),p);
    }else if(info(p) == info(root)){
        cout << "Data sudah terdefinisi.";
    }
}

void printPreOrder_1301213229(adrNode root){
    if(root != NULL){
        cout << info(root) << " ";
        printPreOrder_1301213229(left(root));
        printPreOrder_1301213229(right(root));
    }
}

void printDescendant_1301213229(adrNode root, infotype x){
    if(root != NULL){
        printDescendant_1301213229(left(root),x);
        printDescendant_1301213229(right(root),x);
        if(info(root) == x){
            printPreOrder_1301213229(left(root));
            printPreOrder_1301213229(right(root));
        }
    }
}

int sumNode_1301213229(adrNode root){
    if (root != NULL){
        return (info(root) + sumNode_1301213229(left(root)) + sumNode_1301213229(right(root)));
    }
    return 0;
}

int countLeaves_1301213229(adrNode root){
    if(root == NULL){
        return 0;
    }
    if(left(root) == NULL && right(root) == NULL){
        return 1;
    }else{
        return countLeaves_1301213229(left(root)) + countLeaves_1301213229(right(root));
    }
}

int heightTree_1301213229(adrNode root){
    int height = 0;
    if (root != NULL){
        int left = heightTree_1301213229(left(root));
        int maxHeight = left;
        height = maxHeight + 1;
    }
    return height;
}
