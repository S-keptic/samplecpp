#include <iostream> 
using namespace std;


void arraySum(int arr[] , int size){
    int sum  = 0;
    for(int i = 0 ; i < size ; i++){
        sum = sum + arr[i]; 
    }
    cout << sum <<endl; 
}


int main(){

    int n ;
    cin >>n;

    int myarray[100];

    for(int i = 0 ; i < n ; i++){
        cin >> myarray[i];
    } 

    arraySum(myarray,n);
}