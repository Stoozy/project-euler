#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

static double sqr5 = 2.2360679775;
static double onedivsqr5 = 1/sqr5;


int get_nth_fib(int n){
    return onedivsqr5 * pow(((1+sqr5)/2), n) - onedivsqr5 * (pow(((1-sqr5)/2), n));
}

int main(){

    // https://en.wikipedia.org/wiki/Fibonacci_number 
    // https://wikimedia.org/api/rest_v1/media/math/render/svg/bf676e167e853211636ae5862890a08ae78cb10a


    int cfib=0, n=0, sum=0; 
    while( cfib < 4000000){
        cfib = get_nth_fib(n);
        cout  << n << ": " << cfib << endl;
        if(cfib % 2 == 0) sum+=cfib;
        n++;
    }
    cout << "Sum of even fibonacci numbers is: " << sum << endl;
    return 0;
}
