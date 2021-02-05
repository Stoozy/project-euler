#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(unsigned long n){
    for(unsigned long i=n-1; i>1; --i){
        if(n%i == 0) return false;
    }
    return true;
}

int main(){
    unsigned long inp = 600851475143;
    unsigned long c = sqrt(inp);

    while(c!=0){
        cout << "Trying " << c <<endl;
        if(inp%c==0 && is_prime(c)){
            cout << "Largest prime factor of " << inp << " is " << c <<endl;
            return 0;
        }

        --c; 
    }



    return 0;
}
