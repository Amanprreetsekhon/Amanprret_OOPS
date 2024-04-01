#include <iostream>

class Room {
private:
    float length;
    float breadth;

public:
    
    Room(float l, float b) : length(l), breadth(b) {}

    
    void set(float l, float b) {
        length = l;
        breadth = b;
    }

   
    void get(float& l, float& b) {
        l = length;
        b = breadth;
    }

    
    float area() {
        return length * breadth;
    }

   
    float perimeter() {
        return 2 * (length + breadth);
    }

   
    void display() {
        std::cout << "Length: " << length << " feet\n";
        std::cout << "Breadth: " << breadth << " feet\n";
        std::cout << "Area: " << area() << " square feet\n";
        std::cout << "Perimeter: " << perimeter() << " feet\n";
    }
};

int main() {
   
    Room rooms[5] = {
        Room(10, 12),
        Room(15, 20),
        Room(8, 10),
        Room(12, 15),
        Room(18, 22)
    };


    for (int i = 0; i < 5; ++i) {
        std::cout << "Room " << i + 1 << ":\n";
        rooms[i].display();
        std::cout << std::endl;
    }

    return 0;
}
