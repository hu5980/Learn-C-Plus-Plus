#include <iostream>
#include "math.h"
using  namespace std;

extern "C" {
int other();
}

int main() {
    cout<<sum(10,20)<<endl;
    cout<<delta(30,20)<<endl;
    cout<<"other = "<<other()<<endl;
    return 0;
}