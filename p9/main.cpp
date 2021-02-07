#include <iostream>
#include <math.h>
using namespace std;


int main(){
    unsigned check_max = 1000;
    for(int a=1; a<check_max; ++a) {
        for(int b=1;b<check_max; ++b){
            for(int c=1; c<check_max; ++c){
                if(pow(a,2) + pow(b, 2) == pow(c, 2)  ){
                    cout << "Found triplet " << a << " " << b << " " << c << endl;
                    if(a+b+c==1000){
                        cout << "Product is " << a*b*c << endl;
                        exit(0);
                    }
                }
            }
        }
    }

    return 0;
}
