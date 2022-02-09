#include "../helper.h"

void task7() {
    std::vector<int> queue;
    int num = 0;

    while (num != -1) {
        std::cout << "Enter your num";
        std::cin >> num;
        while (queue.size() != 0 && queue[queue.size() - 1] < num)
            queue.pop_back();
        queue.push_back(num);
        outputVector(queue);
    }
    outputVector(queue);
    std::cout << "Capacity: " << queue.capacity() << " Length: " << queue.size() << std::endl;
}
