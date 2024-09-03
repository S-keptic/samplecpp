#include <iostream>
#include <climits>
using namespace std;

int largest_element(int arr[],int n){
    int largestElement = INT_MIN;
    for(int i = 0; i<n;i++){
        if(arr[i]>largestElement){
            largestElement=arr[i];
        }


    }
    return largestElement;
}

int main (){
    int arr[] = {1,232 ,1341 ,3 , 13 ,13 ,435};
    int answer = largest_element(arr,5);
    cout <<answer; 
}