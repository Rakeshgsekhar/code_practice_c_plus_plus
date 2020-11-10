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

Node* removeDuplicates(Node* head) {
    Node *temp,*prev;
    temp = head;
    while(temp->next != NULL){
        if(temp->data == temp->next->data){
            Node *nextNode = temp->next->next;
           temp->next = nextNode;
        }else{
            temp = temp->next;
        }
    }
    Traverse(head);
    return head;
}

bool detectCycle(Node *head){
    Node *slow_pointer = head;
    Node *fast_pointer = head;
    while(slow_pointer && fast_pointer && fast_pointer->next){
        slow_pointer = slow_pointer->next;
        fast_pointer = fast_pointer->next->next;
        if(slow_pointer == fast_pointer){
            return true;
        }
    }
    return false;
}


int main(){


    Node* head;
    Node* one = NULL;
    Node* two = NULL;
    Node* three = NULL;
    Node* four = NULL;
    Node* five = NULL;
    Node* six = NULL;
    Node* seven = NULL;

    one = new Node(); 
    two = new Node(); 
    three = new Node();
    four = new Node();
    five = new Node();
    six = new Node(); 
    seven = new Node();


    one->data = 1;
    two->data =  2;
    three->data = 3;
    four->data = 4;
    five->data = 5;
    six->data =  6;
    seven->data = 7;

    

    //// List 2
    Node* head2;
    Node* one2 = NULL;
    Node* two2 = NULL;
    Node* three2 = NULL;
    Node* four2 = NULL;
    Node* five2 = NULL;
    Node* six2 = NULL;
    Node* seven2 = NULL;

    one2 = new Node(); 
    two2 = new Node(); 
    three2 = new Node();
    four2 = new Node();
    five2 = new Node();
    six2 = new Node(); 
    seven2 = new Node();


    one2->data = 1;
    two2->data =  2;
    three2->data = 3;
    four2->data = 4;
    five2->data = 5;
    six2->data =  6;
    seven2->data = 7;

    // one2->next = two2;
    // two2->next = three2;
    // three2->next = four2;
    // four2->next = five2;
    // five2->next = six2;
    // six2->next = seven2;
    

    one->next = one2;
    one2->next = two;
    two->next = two2;
    two2->next = three;
    three->next = three2;
    three2->next = four;
    four->next = four2;
    four2->next = five;
    five->next = five2;
    five2->next = six;
    six->next = six2;
    six2->next = seven;
    seven->next = seven2;
    seven2->next = NULL;


    head = one; 
    // head2 = one2; 

    Traverse(head);
    cout<<endl;
    removeDuplicates(head);
    // Traverse(head);
    cout<<endl;
    detectCycle(head);
    cout<<endl;
    seven2->next = one;
    detectCycle(head);
    cout<<endl;

}