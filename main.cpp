#include <iostream>
#include "Tree.h"

using namespace std;

int main()
{
    adrNode root = NULL;
    adrNode p;
    int node[9] = {5,3,9,10,4,7,1,8,6};

    cout << "============================================" << endl;
    for(int i = 0; i <= 8; i++){
        cout << node[i] << " ";
        p = newNode_1301213229(node[i]);
        insertNode_1301213229(root,p);
    }
    cout << endl;
    cout << endl;
    cout << "Pre Order              : ";
    printPreOrder_1301213229(root);
    cout << endl;
    cout << endl;

    cout << "Descendent of Node 9   : ";
    printDescendant_1301213229(root,9);
    cout << endl;
    cout << endl;

    cout << "Sum of BST Info        : ";
    cout << sumNode_1301213229(root);
    cout << endl;

    cout << "Number of Leaves       : ";
    cout << countLeaves_1301213229(root);
    cout << endl;

    cout <<"Height of Tree         : ";
    cout << heightTree_1301213229(root);
    cout << endl;

    cout << "============================================" << endl;

    return 0;
}
