#include <iostream>
using namespace std;

int reverse(int n){
    int reversed =0, remainder;
    while(n!=0){
        remainder = n%10;
        reversed = reversed *10 + remainder;
        n/=10;
    }
    return reversed;
}

bool is_palidrome(int n){
    // Check if number is palindrome
    return reverse(n) == n;
}

int main(){
    // iterate over every 3 digit number twice
    // multiply and check if mult is palindrome
    // update palindrome var
    unsigned largest_palindrome=0;
    for(int i=100; i<1000; i++){
        for(int j=100; j<1000; j++){
            if(is_palidrome(i*j) && (i*j)>largest_palindrome)
                largest_palindrome=i*j;
        }
    }
    cout << "Largest palindrome made from the product of two 3-digit numbers is " << largest_palindrome << endl;
    return 0;
}
