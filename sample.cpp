#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;

    for(int i = 1; i<=n;i++){
        fact = fact *i;
    }
    return fact;
}

int ncr(int n , int r){
int num = factorial(n);
int denom = factorial(r)*factorial(n-r);
int factorial = num/denom;

return factorial;
}

int main(){
int n ,r ;
cout<< "enter the value of n" <<endl;
cin >> n;
cout << "enter the value of r" << endl;
cin >> r;

int answer =ncr(n,r);

cout << answer <<endl;




}