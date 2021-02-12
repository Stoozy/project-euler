#include <iostream>
using namespace std;

unsigned get_sequence_len(unsigned n){
    unsigned len = 0;
    while(n!=1) {
        if(n%2==0) n/=2;
        else n = 3*n+1;
        ++len;
    }
    // count 1 in the sequence
    return ++len;
}

int main(){
    unsigned largest_seq_idx=0, largest_seq_len =0;
    
    for(unsigned i=1; i<1000000; ++i){
        unsigned clen = get_sequence_len(i);
        if(clen > largest_seq_len){
            largest_seq_len = clen;
            largest_seq_idx = i;
        }
    }
    cout << "Largest sequence length is "<< largest_seq_len << endl;
    cout << "Largest sequences starting number is  "<<largest_seq_idx<<endl;
    return 0;

}
