#include "Neuron.h"


int main(){
    float x = 1;
    float y = 0;
    //float* px = &x; 
    //float* py = &y;
    neuron pi(2);

    cout << pi.resultFunc({&x,&y});

    return 0;
}
