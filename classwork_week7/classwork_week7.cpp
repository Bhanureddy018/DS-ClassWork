#include <iostream>

class Rectangle {
private:
    double width;
    double height;

public:
    // Getter for width
    double getWidth() const {
        return width;
    }

    // Setter for width
    void setWidth(double newWidth) {
        if (newWidth >= 0) {
            width = newWidth;
        } else {
            std::cerr << "Width cannot be negative." << std::endl;
        }
    }

    // Getter for height
    double getHeight() const {
        return height;
    }

    // Setter for height
    void setHeight(double newHeight) {
        if (newHeight >= 0) {
            height = newHeight;
        } else {
            std::cerr << "Height cannot be negative." << std::endl;
        }
    }

    // Method to calculate area
    double calculateArea() const {
        return width * height;
    }
};

int main() {
    Rectangle rect;

    // Setting values using setters
    rect.setWidth(5.0);
    rect.setHeight(3.0);

    // Getting values using getters
    std::cout << "Width: " << rect.getWidth() << std::endl;
    std::cout << "Height: " << rect.getHeight() << std::endl;

    // Calculating and printing area
    std::cout << "Area: " << rect.calculateArea() << std::endl;

    return 0;
}
