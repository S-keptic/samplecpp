#include <iostream>
using namespace std;
void swap(int arr[],int size){
    for(int i = 0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}

int main(){
    int myarray[5] = {132 ,123 ,135 , 41 ,40};
    swap(myarray,5);
    for(int i = 0; i<5;i++){
        cout <<myarray[i] << " "; 
    }
}