#include "Neuron.h"


int main(){
    float x = 0;
    float y = 1;
    neuron pi(2);

    cout << pi.resultFunc({&x,&y}) << endl;
    cout << *pi.resultFunc({&x,&y}) << endl;

    float xx = 0;
    float yy = 1;
    float zz = 1;
    vector<float> ww = {0.4, 0.6, 1};
    vector<float*> www={&ww[0],&ww[1],&ww[2]};
    float bb = 0.7;
    neuron po(&www, &bb);
    cout <<*po.resultFunc({&xx,&yy,&zz}) << endl;
    cout <<(*po.getWeights())[1] << endl;

    return 0;
}
