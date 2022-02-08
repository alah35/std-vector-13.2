#include "helper.h"

void task5() {

    std::vector<int> list;

    int num = 0;
    std::cout << "How many operations do you want to do? ";
    std::cin >> num;

    while (num != 0) {
        int n, m;
        std::cout << "Perform operation: ";
        std::cin >> n >> m;
        if (n == 1) {
            list = add(list, m);
        }
        if (n == 2) {
            list = delete_from_position(list, m);
        }
        num--;
    }
    outputVector(list);
}
