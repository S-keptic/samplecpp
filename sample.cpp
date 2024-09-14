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



Node* deleteTheLastNode(Node* head){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    Node *temp = head; 
    while(temp->next->next!=nullptr){
        temp =temp->next;
       
    }
     delete(temp->next);
        temp->next = nullptr;
    return head;
}

Node* removeAtK(Node* head,int k){
    if(head==nullptr){
        return nullptr;
    }
    if(k==1){
        head = head->next;
        return head;
    }
    int counter  = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp!=nullptr){
        counter++;
        if(counter==k){
            prev->next=prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* insertelement(Node* head,int val){
   return new Node(val,head);
}


Node* inserttail(Node* head , int value){
    if(head==NULL){
        return new Node(val);
    }
    Node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
    
}




Node* insertK(Node* head,int el,int k){
    if(head==NULL){
        return new Node(el);
    }else{
        return head;
    }
    if(k==1){
        return new Node(el,head);
    }
    int counter = 0;
    Node* temp = head;
    while(temp!=NULL){
        counter++;
        if(counter==(k-1)){
            Node* x = new Node(el,temp->next);
            temp->next = x;
        }
        temp = temp->next;
        
    }
return head;
}







int main(){
    vector<int> arr = {22,4,56,7};
    Node* head = convertArrToLl(arr);
   
    Node* temp = head;
     head = inserttail(head,100);
    while(temp){
        cout <<temp->data<<" "; 
        temp = temp->next;
    }




}