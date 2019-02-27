#include <iostream>
using namespace std;


struct Date {
    int year;
    int month;
    int day;
};

int main() {

    const  int age = 10;

    Date d = {2013,2,4};
    Date d1 = {2015,3,2};

    cout<< d.year <<d.month<<d.day<<endl;

    

    std::cout << "Hello, World!" << std::endl;
    return 0;
}