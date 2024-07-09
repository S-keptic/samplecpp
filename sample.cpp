#include <iostream>
using namespace std;
int count = 1;
void f(int n){
    if(count == n+1){
        return;
    }
    cout << count << endl;
    count++;
    f(n);


}

int main(){
    f(100);
}