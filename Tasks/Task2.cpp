#include "../helper.h"

void task2() {
    std::vector<int> List;
    inputVector(List);
    outputVector(List);
    float f = getAverage(List);
    std::cout << "Average num = " << f << " Amount of notes = " << List.size() << std::endl;
}
