#include <iostream>
using namespace std;

int iseven(int n){
    if(n%2==0){
        return true;
    }else{
        return false;
    }

}
int main(){
    bool ans = iseven(5);
    if (ans==1){
        cout <<"is even"; 
    }else{
        cout << "is odd";
    }
}