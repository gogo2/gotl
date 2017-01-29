#include <iostream>
#include "tests.h"

using namespace std;


int main() {
    try {
        cout << "_____TESTS_____" << endl;
        cout << endl << "____foreach_____________________________________" << endl;

        tester::foreach_test();
        cout << endl << endl << "____ce_string___________________________________" << endl;
        tester::ce_string_test();
        cout << endl << "________________________________________________" << endl;

    }
    catch (exception &e) {
        cout << e.what() << '\n';
    }

    return 0;
}