#include "comp2_file1.h"

void comp2_class1::set_a(int val) {
    a = val;
    //b = comp2_class2();
    b.print_hello();
}

int comp2_class1::get_a(void) {
    return a;
}
