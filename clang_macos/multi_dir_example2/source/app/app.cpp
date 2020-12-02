#include "comp1_file1.h"
#include "comp2_file1.h"
#include "comp3_file1.h"
#include <iostream>
using namespace std;

int main() {

    comp1_class1 comp1;
    comp1.set_a(10);
    cout << "comp1: value is " << comp1.get_a() << endl;

    comp2_class1 comp2;
    comp2.set_a(20);
    cout << "comp2: value is " << comp2.get_a() << endl;

    comp3_class1 comp3;
    comp3.set_a(30);
    cout << "comp3: value is " << comp3.get_a() << endl;

    return 0;
}
