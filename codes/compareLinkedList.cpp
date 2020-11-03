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

bool compare_lists(Node* head1, Node* head2) {
    // cout<<"Inside reverse"<<endl;
    Node *temp = head1, *temp2 = head2 ;
    while(temp->next != NULL || temp2->next != NULL){
        if((temp->next == NULL && temp2->next != NULL) || (temp2->next == NULL && temp->next != NULL)){
            return 0;
        }
        if(temp->data != temp2->data){
            return 0;
        }
        temp = temp->next;
        temp2 = temp2->next;
    }

    return 1;

}
Node* mergeList(Node* head1, Node* head2){
    Node *result;
    if (head1 == NULL){
        return head2;
    }else if(head2 == NULL){
        return head2;
    }

    if (head1->data <= head2->data)  
    {  
        result = head1;  
        result->next = mergeList(head1->next,head2);  
    }  
    else
    {  
        result = head2;  
        result->next = mergeList(head1, head2->next);  
    }  
    return(result);
}

void reverse(Node* head){
    Node* temp = head;
    Node *next=NULL, *prev = NULL;
    while(temp != NULL){
        next = temp->next;
        temp->next= prev;

        prev = temp;
        temp = next;
    }
    head = prev;
    Traverse(head);
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
    four->next = NULL;
    five->next = six;
    six->next = seven;
    seven->next = NULL;


    head = one; 

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

    one2->next = two2;
    two2->next = three2;
    three2->next = four2;
    four2->next = five2;
    five2->next = six2;
    six2->next = seven2;
    seven2->next = NULL;


    head2 = one2; 

    Traverse(head);
    cout<<endl;
    Traverse(head2);
    cout<<endl;
    // cout<<compare_lists(head,head2);
    Node *mergedList = mergeList(head,head2);
    cout<<endl;
    Traverse(mergedList);
    // reverse(head);
}