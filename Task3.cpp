#include "helper.h"

void task3() {
    std::vector<int> queue;
    int num;
    while (num != -1) {
        std::cout << "Enter your number: ";
        std::cin >> num;
        if (num == -1)
            break;
        std::cout << "Enter your position: ";
        int pos;
        std::cin >> pos;
        if (pos < 0)
            break;

        queue = add_to_position(queue, num, pos);
    }
    outputVector(queue);
}


