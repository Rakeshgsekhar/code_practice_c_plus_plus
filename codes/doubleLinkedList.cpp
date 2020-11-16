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
    Node* prev;

    Node (int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};


void Traverse(Node* node){
    while (node != NULL){
        cout<<node->data<<" -> ";
        node = node->next;
    }
}

Node *insertToSortedList(Node *head, int data){
    Node *temp = head;
    Node *newNode = new Node(data);
    if(head == NULL){
        head = newNode;
    }else if(head->data >= newNode->data){
        newNode->next = head;
        newNode->next->prev = head;
        head = newNode;
    }else{
        while(temp->next != NULL && temp->next->data < newNode->data){
            temp = temp->next;
        }
        newNode->next = temp->next;

        if(temp->next != NULL){
            newNode->next->prev = newNode;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
    
    return head;
}
void reverseList(Node **head){

    Node *temp = NULL;
    Node *curr = *head;

    while(curr != NULL){
        temp = curr->prev;
        curr->prev = curr->next;
        curr->next = temp;
        curr = curr->prev;
    }

    if(temp != NULL){
        *head = temp->prev;
    }
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

    one = new Node(1); 
    two = new Node(2); 
    three = new Node(3);
    four = new Node(4);
    five = new Node(5);
    six = new Node(6); 
    seven = new Node(7);

    one->next = two;
    two->prev = one;
    two->next = three;
    three->prev = two;
    three->next = four;
    four->prev = three;
    four->next = five;
    five->prev = four;
    five->next = six;
    six->prev = five;
    six->next = seven;
    seven->prev = six;
    seven->next = NULL;
    head = one;

    Traverse(head);
    cout<<endl;
    reverseList(&head);
    Traverse(head);
}