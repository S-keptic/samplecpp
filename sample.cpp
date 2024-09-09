#include <iostream> 
#include <string>
using namespace std;

int checkPalindrome(string n) {
    int start = 0;
    int end = n.length() - 1;
    
    while (start <= end) {
        if (n[start] != n[end]) {
            return 0; // Not a palindrome
        }
        start++;
        end--;
    }
    return 1; // Is a palindrome
}

int main() {
    string n = "naman";
    int value = checkPalindrome(n);
    cout << value; // 1 if palindrome, 0 otherwise
}
