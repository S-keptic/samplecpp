#include <iostream>
using namespace std;

int main (){

int num1;
int num2; 
char op;

cin >> num1;
cin >> num2;
cin >> op; 

switch(op){
    case '+': cout <<num1+num2;
    break;
    case '-' : cout <<num1-num2;
    break;
    case '/' : cout <<num1/num2;
    break;
    case '*' : cout << num1*num2;      
}








}