#include "../helper.h"

void task8() {
    std::vector<int> queue;

    int num = 0;
    while (num != -1) {
        std::cout << "Enter your num: ";
        std::cin >> num;
        queue.push_back(num);
        if (queue.capacity() - queue.size() == 2) {
            std::cout << "The queue is almost full!" << std::endl;
        }
        std::cerr << "Capacity: " << queue.capacity() << " Length: " << queue.size() << std::endl;
    }
}
