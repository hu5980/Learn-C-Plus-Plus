#include <iostream>
using namespace std;

inline void func() {
    cout << "func"<<endl;
}

inline int sum(int v1,int v2) {
    return v1+v2;
}

int main() {
    func();
    int c = sum(10,20);
    cout << c << endl;
    return 0;
}