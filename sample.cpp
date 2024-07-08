#include <iostream>
using namespace std;

int count = 1;
void f(){
    if(count == 101){
        return;
    }
    cout << count << endl;
    count++;
    f();
}

int main (){
    f();
}