#include <iostream>
using namespace std;


int binarySearch(int arr[],int size,int key)
{
    int start = 0;
    int end = size-1;
    int mid = (start+end)/2;

    while(start<=end){
        if(key==arr[mid]){
            return mid;
        }
        if(key>arr[mid]){
            start = mid+1;
        }else{
            end = mid-1;
        }
        mid = (start+end)/2;

    }
    return -1;
}



int main()
{
    int even[4] = {2,4,6,8};
    int value = binarySearch(even,4,2);
    cout << value <<endl;  



}