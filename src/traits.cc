#include <iostream>

enum class Fruit { apple, orange, pear };
enum class Color { red, green, orange };

template <typename T>
struct Traits {
    static constexpr std::string name(int) { return "unknown"; }
};

template <>
struct Traits<Fruit> {
    static std::string name(int index) {
        switch (index) {
        case (0):
            return "apple";
            break;
        case (1):
            return "orange";
            break;
        case (2):
            return "pear";
            break;
        default:
            return "unknown";
        }
    }
};

template <>
struct Traits<Color> {
    static std::string name(int index) {
        switch (index) {
        case (0):
            return "red";
            break;
        case (1):
            return "green";
            break;
        case (2):
            return "orange";
            break;
        default:
            return "unknown";
        }
    }
};

int main() {
    int t = 0;
    std::cin >> t;

    for (int i = 0; i != t; ++i) {
        int index1;
        std::cin >> index1;
        int index2;
        std::cin >> index2;
        std::cout << Traits<Color>::name(index1) << " ";
        std::cout << Traits<Fruit>::name(index2) << "\n";
    }
}
