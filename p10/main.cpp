#include <iostream>
#include <math.h>
using namespace std;

bool is_prime(unsigned n){
   for(unsigned i=2; i<=sqrt(n); ++i)
       if(n%i == 0) return false;
   return true;
}


int main(){
    unsigned long sum=0;

    for(unsigned i=2; i<2000000; ++i)
        if(is_prime(i)) sum+=i;

    cout << "Sum of all primes below 2 million is " << sum << endl;
    return 0;
}
