#include <iostream>
#include "tests.h"

using namespace std;


int main() {
    try {
        cout << "_____TESTS_____" << endl;
        cout << endl << "____foreach_____________________________________" << endl;

        tester::foreach_test();
        cout << endl << endl << "____make_array___________________________________" << endl;
        tester::make_array_test();
        cout << endl << "________________________________________________" << endl;

    }
    catch (exception &e) {
        cout << e.what() << '\n';
    }

    return 0;
}