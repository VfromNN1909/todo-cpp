#include <iostream>
#include "models/Task.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    auto task = Task("Купить молоко", "Сходить в магазин и купить молоко", 1, 1L);
    std::cout << task;
    return 0;
}
