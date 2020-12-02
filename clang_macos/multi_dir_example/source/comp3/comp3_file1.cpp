#include "comp3_file1.h"

void comp3_class1::set_a(int val) {
    a = val;
    //b = comp3_class2();
    b.print_hello();
}

int comp3_class1::get_a(void) {
    return a;
}
