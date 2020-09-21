#include <iostream>
#include<vector> 
#include<set>
#include <algorithm>
#include<string>
#include <cstring>
#include<conio.h>

using namespace std;

class Node{
    public:
    int data;
    Node* next;
};


void Traverse(Node* node){
    while (node != NULL){
        cout<<node->data<<" -> ";
        node = node->next;
    }
}

void addAtBegining(Node ** head,int value){
    // Node at Beginning head;
    cout<<endl<<"Add @ Beginning"<<endl<<"****************"<<endl;
    Node * newNode = new Node();
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
}

void addAtEnd(Node ** head,int value){
    // Node at Beginning head;
    cout<<endl<<"Add @ End"<<endl<<"****************"<<endl;
    Node * newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;
    Node * last = *head;

    if(*head == NULL){
        *head = newNode;
    }
    while (last->next != NULL){
        last = last->next;
    }

    last->next = newNode;
    // *head = newNode;
}

void deleteK(Node** head,int valu){
    cout<<endl<<"Delete K from list"<<endl<<"****************"<<endl;
    Node* prev = NULL;
    Node* newNode = new Node();
    newNode = *head;
    while(newNode != NULL){
        if(newNode->data == valu){
            if(prev == NULL){
                *head = newNode->next;
                 newNode = newNode->next;
            }else{
                prev->next = newNode->next;
                newNode = newNode->next;
            }
        }else{
            prev = newNode;
            newNode = newNode->next;
        }
        
    }
    // Traverse()
}


Node * deleteKNoRef(Node* head,int val){
    cout<<endl<<"Delete K from list nor Ref "<<endl<<"****************"<<endl;
    Node* prev = NULL;
    Node* newNode = head;

    while(newNode != NULL){
        if(newNode->data == val){
            if(prev == NULL){
                head = newNode->next;
                newNode = newNode->next;
            }else{
                prev->next = newNode->next;
                newNode = newNode->next;
            }
        }else{
            prev = newNode;
            newNode = newNode->next;
        }
    }
    return head;
}


Node * deleteKNoRefWithRec(Node* head,int val){
   
    if (head==NULL){
        return NULL;
    }
    head->next = deleteKNoRefWithRec(head->next,val);

    if(head->data == val) return head->next;

    return head;
}

Node * reverseLinkedList(Node* head){
    Node* newHead = NULL;
    while(head != NULL){
        addAtBegining(&newHead,head->data);
        head = head->next;
    }

    return newHead;
}

bool isPalindrom(Node* list1, Node* list2){
     while(list1 != NULL && list2 != NULL){
        if (list1->data != list2->data){
            return false;
        }
        list1 = list1->next;
        list2 = list2->next;
    }
    return true;
}


bool isPalindromRecu(Node** left,Node* right){
    if(right == NULL){
        return true;
    }

    bool isPalin = isPalindromRecu(left,right->next);
    if (isPalin == false){
        return false;
    }

    bool isPlain1 = (right->data == (*left)->data);

    *left = (*left)->next;
    return isPlain1;
}

bool isPalindromUtil(Node* head){
    return isPalindromRecu(&head,head);
}
int main(){

    // Node* head;
    // Node* one = NULL;
    // Node* two = NULL;
    // Node* three = NULL;
    // Node* four = NULL;
    // Node* twentyThree = NULL;
    // Node* threeone = NULL;
    // Node* five = NULL;
    // Node* threetwo = NULL;
    // Node* six = NULL;
    // Node* seven = NULL;

    // one = new Node(); 
    // two = new Node(); 
    // three = new Node();
    // four = new Node();
    // twentyThree = new Node();
    // threeone = new Node();
    // five = new Node();
    // threetwo = new Node();
    // six = new Node(); 
    // seven = new Node();


    // one->data = 1;
    // two->data =  2;
    // three->data = 3;
    // four->data = 4;
    // twentyThree->data = 23;
    // threeone->data = 3;
    // five->data = 5;
    // threetwo->data = 3;
    // six->data =  6;
    // seven->data = 7;
    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;
    Node* twentyThree = NULL;
    Node* threeone = NULL;
    Node* five = NULL;
    Node* threetwo = NULL;
    Node* six = NULL;
    Node* seven = NULL;

    one = new Node(); 
    two = new Node(); 
    three = new Node();
    four = new Node();
    twentyThree = new Node();
    threeone = new Node();
    five = new Node();
    threetwo = new Node();
    six = new Node(); 
    seven = new Node();


    one->data = 1;
    two->data =  2;
    three->data = 3;
    four->data = 4;
    twentyThree->data = 5;
    threeone->data = 4;
    five->data = 3;
    threetwo->data = 2;
    six->data =  1;
    seven->data = 0;

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = twentyThree;
    twentyThree->next = threeone;
    threeone->next = five;
    five->next = threetwo;
    threetwo->next = six;
    six->next = seven;
    seven->next = NULL;


    head = one; 


    Traverse(head);
    
    // addAtBegining(&head,23);
    // Traverse(head);

    // addAtBegining(&head,23);
    // Traverse(head);

    // addAtBegining(&head,23);
    // Traverse(head);

    // addAtBegining(&head,20);
    // Traverse(head);
    // addAtBegining(&head,20);
    // Traverse(head);
    
    // addAtEnd(&head,23);
    // Traverse(head);
    
    // addAtEnd(&head,23);
    // Traverse(head);

    // addAtEnd(&head,20);
    // Traverse(head);
    // addAtEnd(&head,20);
    // Traverse(head);
    
    // addAtEnd(&head,23);
    // Traverse(head);

    // deleteK(&head,23);
    // Traverse(head);


    // Node* newHead = deleteKNoRef(head,3);
    // Traverse(newHead);


    cout<<endl<<"Delete K from list nor Recurssion "<<endl<<"****************"<<endl;
    Node* newHead1 = deleteKNoRefWithRec(head,0);
    Traverse(newHead1);
    head = newHead1;

    cout<<endl<<"Reversed "<<endl<<"****************"<<endl;
    Node* reversedList = reverseLinkedList(head);
    Traverse(reversedList);

    cout<<endl<<"Palindrom"<<endl;
    cout<<(isPalindrom(head,reversedList)? "true":"false")<<endl;

    cout<<endl<<"Palindrom-Recursion"<<endl;
    cout<<(isPalindromUtil(head)? "true":"false")<<endl;
    return 0;
}