#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;
     
     while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start = mid +1;
        }else{
            end = mid - 1;
        }
        mid = (start+end)/2;
     }
     return -1;
}

int main()
{
    int even[6] = {2,4,6,8,10};
    int odd[5] = {4,8,16,20,24};
    int value = binarySearch(odd,5,20);
    cout <<value <<endl;  
}