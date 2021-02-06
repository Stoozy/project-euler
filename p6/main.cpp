#include <iostream>
#include <math.h>
using namespace std;

int sum_n(int n){
    return (n*(n+1)/2);
}

int sum_n2(int n){
    return (n*(n+1)*(2*n+1))/6;
}

int main(){
    int sum_sqrd = pow(sum_n(100), 2);
    int difference = sum_sqrd - sum_n2(100);
    cout << "The difference between the sum of the squares of the first one hundred natural numbers and the square of the sum is :  " << difference << endl;
    return 0;
}
