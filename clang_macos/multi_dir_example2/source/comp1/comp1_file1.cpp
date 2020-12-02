#include "comp1_file1.h"

void comp1_class1::set_a(int val) {
    a = val;
    //b = comp1_class2();
    b.print_hello();
}

int comp1_class1::get_a(void) {
    return a;
}
