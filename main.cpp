#include "Neuron.h"


int main(){
    flo x = 0;
    flo y = 1;
    //flo* px = &x; 
    //flo* py = &y;
    neuron pi(2);

    cout << pi.resultFunc({&x,&y}) << endl;
    cout << *pi.resultFunc({&x,&y}) << endl;

    flo xx = 0;
    flo yy = 1;
    flo zz = 1;
    vector<flo> ww = {0.4, 0.6, 1};
    flo bb = 0.7;
    neuron po({&ww[0], &ww[1], &ww[2]}, &bb);
    cout <<*po.resultFunc({&xx,&yy,&zz}) << endl;
    po.setWeights(po.getWeights());
    cout <<*po.getWeights()[0] << endl;

    return 0;
}
