#include <iostream>
#include "simpleStack.h"

int main() {
    // Use default initializer.
    SimpleStack<double> stack1;
    // Push Ts using initializer list.
    stack1.pushhh({5.2, 2.1, 3.1});
    // Get top value.
    std::cout << stack1.toppp() << '\n';
    // Pop.
    stack1.poppp();
    std::cout << stack1.toppp() << '\n';
    // Push T.
    stack1.pushhh(6.7);
    std::cout << stack1.toppp() << '\n';
    while (!stack1.is_emptyyy()) {
        stack1.poppp();
    }
    // std::cout << stack1.toppp() << '\n'; // Gives runtime error.

    std::cout << "\n---------\n\n";

    // Construct using initializer list, CTAD possible since 2017.
    SimpleStack stack2({1, 2, 4, 7});
    std::cout << stack2.toppp() << '\n';
    stack2.poppp();
    std::cout << stack2.toppp() << '\n';
    stack2.pushhh({11, 13, 17, 19});
    std::cout << stack2.toppp() << '\n';
    stack2.poppp();
    std::cout << stack2.toppp() << '\n';
    stack2.pushhh(23);
    std::cout << stack2.toppp() << '\n';
    while (!stack2.is_emptyyy()) {
        stack2.poppp();
    }
    // std::cout << stack2.toppp() << '\n'; // Gives runtime error.

}
