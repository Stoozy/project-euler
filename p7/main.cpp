#include <iostream>
using namespace std;

bool is_prime(unsigned long n){
    for(unsigned long i=n-1; i>1; --i){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    int prime_index=0;

    for(unsigned i=2; i<-1; i++){
        if(is_prime(i) ) {
            cout << ++prime_index << ": " << i << endl;
            if(prime_index == 10001) {
                cout << "10 001 st  prime number is " << i << endl;
                return 0;
            }
        }
        
    }
    return 0;
}


