#include <iostream>
using  namespace std;

int sum (int v1,int v2) {
    return v1 + v2;
}

double sum (double v1,double v2) {
    return v1 + v2;
}

int sum (int v1,int v2,int v3) {
    return v1 + v2 + v3;
}

int main() {

    int a =  sum(10,20);
    int b =  sum(10,20,30);

   cout << "a=" << a<<endl<<"b="<<b<<endl;
    return 0;
}