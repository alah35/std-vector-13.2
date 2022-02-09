#include "../helper.h"

void task1() {
    std::vector<int> queue = {12, 13};

    int num = 0;

    while (num != -1) {
        std::cout << "Enter your number: ";
        std::cin >> num;
        queue = add(queue, num);
    }

    outputVector(queue);
}




