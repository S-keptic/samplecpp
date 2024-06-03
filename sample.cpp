#include <iostream>
#include <climits>
using namespace std;

void printArray(int arr[],int size){
    for(int i = 0; i < size ; i++){
        cout << arr[i] << " ";  
    }

}


void getMax(int arr[],int size ){
    int temp = INT_MIN;
    for(int i = 0; i < size ; i++ ){
        if(arr[i]>temp){
            temp = arr[i];
        }
    }
    cout << temp <<endl;  
}

void getMin(int arr[],int size){
    int temp = INT_MAX;
    for(int i = 0; i < size ; i++){
        if(arr[i]< temp){
            temp = arr[i];
        }
    }
    cout <<temp <<endl;   
}


int main()
{
int n ;
cin >> n;

int myarray[5];

for(int i = 0; i < n ; i++){
    cin >> myarray[i]; 
    
}
getMax(myarray,n);
getMin(myarray,n);

}