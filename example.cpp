#include <iostream>
void greet(const std::string& name) {
    std::cout << "Hello, " << name << "!" << std::endl;
}
int main() {
    std::cout << "Hello, World!" << std::endl;
    greet("GitHub");
    return 0;
}
