#include <iostream>
#include "src/lib/LinkedList/LinkedList.h"

int main(int argc, char** argv){
    // LinkedList *greet = new LinkedList();
    // std::cout << greet->getLinkedListMessage() << std::endl;

    LinkedList ll;

    ll.pushFront(1);
    ll.pushBack(2);
    ll.pushBack(3);
    ll.pushBack(4);
    ll.pushBack(6);
    ll.pushFront(0);
    
    ll.insertAfter(5,5);

    ll.printLinkedList();

    ll.popFront();

    ll.printLinkedList();

    ll.popBack();
    
    ll.printLinkedList();

    ll.reverseList();

    ll.printLinkedList();

    std::cout << ll.kthLastElement(4) << std::endl;

    ll.deleteTail();
    
    ll.printLinkedList();

    LinkedList ll2;
    ll2.pushFront(11);
    ll2.pushBack(22);
    ll2.pushBack(33);
    ll2.pushBack(44);

    ll.mergeList(ll.getHead(),ll2.getHead());
    
    return EXIT_SUCCESS;
}
