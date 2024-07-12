#include <iostream>
using namespace std;

void arraySwap(int arr[],int l , int r){
    if(l>=r){
        return;
    }
    swap(arr[l],arr[r]);
    arraySwap(arr,l+1,r-1);
}

void printarray(int arr[]){
    for(int i = 0; i < 5;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int arr[5] = {1,2,3,4,5};
    arraySwap(arr,0,4);
    printarray(arr);
}