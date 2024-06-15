#include <iostream>
using namespace std;


int findPivot(int arr[],int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;


    while(start<end){
        if(arr[mid]<=arr[0]){
            start = mid +1;

        }else{
            end = mid;
        }
    }
    return start;
}

int main(){
    int arr[6] = {1,7,3,6,5,6};
    int val = findPivot(arr,6);
    cout << val; 

}