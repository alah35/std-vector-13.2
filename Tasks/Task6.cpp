#include "../helper.h"

void task6() {
    std::vector<int> queue;
    int num = 0;
    while (num != -1) {
        std::cout << "Enter num: ";
        std::cin >> num;
        queue.push_back(num);
    }
    outputVector(queue);
}


