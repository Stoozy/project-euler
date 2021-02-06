#include <iostream>
using namespace std;

bool is_sned(unsigned n){
    bool ret=true;
    for(unsigned i=1; i<21; i++){
        if(n%i!=0) ret=false;
    }
    return ret;
}

int main(){
    for(unsigned i=1; i<-1; i++){
        if(is_sned(i)){
            cout << "The smallest number that can be divided by each of the numbers from 1 to 10 without any remainder: "  << i << endl;
            break;
        }
    }

    return 0;
}
