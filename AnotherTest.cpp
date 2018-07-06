
#include "BST.h"

#include <iostream>

int main()
{
    BinarySearchTree<int> bstBalanced;
    BinarySearchTree<int> bstLeft;
    BinarySearchTree<int> bstRight;
    BinarySearchTree<int> bstSingle;
    BinarySearchTree<int> bstRandom; //Used the create balanced on visualizer
    
    //Making a balanced tree
    bstBalanced.insert(4);
    bstBalanced.insert(2);
    bstBalanced.insert(7);
    bstBalanced.insert(1);
    bstBalanced.insert(3);
    bstBalanced.insert(6);
    bstBalanced.insert(8);
    
    //Left only tree
    for (int i=8; i>0;i--){
        bstLeft.insert(i);
    }
    
    //Right only
    for (int i=0; i<8;i++){
        bstRight.insert(i);
    }
    
    //Single node tree
    bstSingle.insert(10);
    
    //Random bst
    bstRandom.insert(41);
    bstRandom.insert(20);
    bstRandom.insert(65);
    bstRandom.insert(11);
    bstRandom.insert(15);
    bstRandom.insert(29);
    bstRandom.insert(32);
    bstRandom.insert(50);
    bstRandom.insert(91);
    bstRandom.insert(72);
    bstRandom.insert(99);
    bstRandom.insert(92);
    
    
    //Min Max test
//    std::cout << "min value: " << bst.min() << "\n";
//    std::cout << "max value: " << bst.max()  << "\n";
    
    
//   std::cout<<"Contains 4:"<<bst.contains(4)<<"\n";
//   std::cout<<"Contains 5:"<<bst.contains(5)<<"\n";


    //Uncomment to test traversals
    // BinarySearchTree<int>::Traversal method = BinarySearchTree<int>::Traversal::InOrder;
    BinarySearchTree<int>::Traversal method = BinarySearchTree<int>::Traversal::PreOrder;
    // BinarySearchTree<int>::Traversal method = BinarySearchTree<int>::Traversal::PostOrder;
    
    switch (method){
        case BinarySearchTree<int>::Traversal::InOrder:
            std::cout<<"InOrder:\n";
            break;
        case BinarySearchTree<int>::Traversal::PreOrder:
            std::cout<<"PreOrder:\n";
            break;
        case BinarySearchTree<int>::Traversal::PostOrder:
            std::cout<<"PostOrder:\n";
            break;
    }    


    //Single Node test
    auto iterSingle = bstSingle.begin(method);
    std::cout<<"Single :";
    std::cout<<*iterSingle<<", ";    
    iterSingle++;

    std::cout<<"\n";

    //Balanced test using end method
    auto iter = bstBalanced.begin(method);
    auto iterEnd = bstBalanced.end();
    std::cout<<"Balanced :";
    for (iter;iter!=iterEnd;++iter){
        std::cout<<*iter<<", ";    
        // iter++;
    }



    std::cout<<"\n";
    
    //Left test
    auto iterLeft = bstLeft.begin(method);
    std::cout<<"Left :";
    for (int i=0;i<8;i++){
    std::cout<<*iterLeft<<", ";    
    ++iterLeft;
    }
    std::cout<<"\n";
    
    //Right test
    auto iterRight = bstRight.begin(method);
    std::cout<<"Right :";
    for (int i=0;i<8;i++){
    std::cout<<*iterRight<<", ";    
    ++iterRight;
    }
    std::cout<<"\n";
    
    //Random test
    auto iterRandom = bstRandom.begin(method);
    std::cout<<"Random :";
    for (iterRandom;iterRandom!=bstRandom.end();iterRandom++){
    std::cout<<*iterRandom<<", ";    
    // ++iterRandom;
    }
    std::cout<<"\n";
    
    return 0;
}
