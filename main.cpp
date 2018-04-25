#include "Neuron.h"


int main(){
    float x = 0;
    float y = 1;
    //float* px = &x; 
    //float* py = &y;
    neuron pi(2);

    cout << pi.resultFunc({&x,&y}) << endl;
    cout << *pi.resultFunc({&x,&y}) << endl;

    float xx = 0;
    float yy = 1;
    float zz = 1;
    neuron po({0.4, 0.6, 1}, 0.7);
    cout <<*po.resultFunc({&xx,&yy,&zz}) << endl;

    return 0;
}
