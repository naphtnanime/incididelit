#include <iostream>

class Rectangle {
private:
    int width;
    int height;

public:
    Rectangle(int width, int height) {
        this->width = width;
        this->height = height;
    }

    int getWidth() {
        return width;
    }
};

int main() {
    Rectangle rect(10, 5);
    std::cout << rect.getWidth() << std::endl; // Output: 10
    return 0;
}
