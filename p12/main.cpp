#include <iostream>
#include <math.h>
using namespace std;

unsigned nth_triangle_number(unsigned n){
    return (n*(n+1))/2;
}

unsigned n_divisors(unsigned n){
    unsigned ret=0;
    for(unsigned i=1; i<=sqrt(n); ++i)
        n%i == 0 ? ((n/i == i ) ? ret+=1 : ret+=2 ) : ret = ret;
    return ret;
}

int main(){
    for(unsigned i=0; i<-1; ++i){
        if(n_divisors(nth_triangle_number(i))> 500){
            cout << "First number to have over 500 divisors: " << nth_triangle_number(i) << endl;
            return 0;
        }
    }
    return 0;
}
