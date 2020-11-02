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

void reversePrint(Node* head){
    // cout<<"Inside reverse"<<endl;
    if(head == NULL) return;
    reversePrint(head->next);
    cout<<head->data<<"->";

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

    one->next = two;
    two->next = three;
    three->next = four;
    four->next = five;
    five->next = six;
    six->next = seven;
    seven->next = NULL;


    head = one; 


    Traverse(head);
    cout<<endl;
    reversePrint(head);
}