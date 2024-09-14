#include <bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;

    Node(int data1){
        data =data1;
        next = nullptr;
    }
};

Node* convertArrToLl(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i <arr.size();i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
        
    }
    return head;
};


//length of a linked list

int length(Node* head){
    int counter = 0;
    Node* temp = head;
    while(temp){
         temp = temp->next;
         counter++;
    }
return counter;
}

Node * deleteHead(Node* head){
    Node* temp = head;
    head = temp->next;
    delete temp;
    return head;
}



int main(){
    vector<int> arr = {22,4,56,7,7};
    Node* head = convertArrToLl(arr);
    head = deleteHead(head);
    cout << head->data; 

}