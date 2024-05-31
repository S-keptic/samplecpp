#include <iostream>
using namespace std;

int fibbo(int n){
    int num1 = 0;
    int num2 = 1;

    cout << num1 <<" ";
    cout << num2 << " ";

    for(int i = 2;i<=n;i++){
        int nextnum = num1+num2;
        cout << nextnum << " ";
        num1 = num2;
        num2 = nextnum; 
    } 





}

int main(){
    fibbo(5);

}