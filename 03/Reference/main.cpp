#include <iostream>
using namespace std;

void swap(int &a,int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {

    int temp =10;

    int *p = &temp;

    cout<<"p = " <<sizeof(p)<<endl;

    int age = 10;

    int &refAge = age;

    cout <<"refAge = "<< sizeof(refAge)<<endl;

    refAge = 20;

    cout<<age<<endl;

    int a = 10;
    int b = 20;

    swap(a,b);

    cout << "a = " <<a <<" b = " << b <<endl;




    return 0;
}