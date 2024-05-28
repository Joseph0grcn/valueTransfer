#include <iostream>
#include <vector>
#include <string>

// berkay avcý 220305851 

// Define the human class
class human {
public:
    int height;           // Member variable for height
    std::string name;     // Member variable for name

    // Constructor with default values
    human(int h = 0, std::string n = "") : height(h), name(n) {}

    // Method to display the human object's information
    void display() const {
        std::cout << "Name: " << name << ", Height: " << height << std::endl;
    }
};

// Function to copy values between two vectors of human objects
void CopyValues(std::vector<human>& v1, std::vector<human>& v2) {
    // Check if the vectors are of equal size
    if (v1.size() != v2.size()) {
        std::cout << "Vectors are not of equal size." << std::endl;
        return;
    }

    // Copy the first three elements from v2 to v1
    for (int i = 0; i < 3; ++i) {
        *(v1.data() + i) = *(v2.data() + i);
    }

    // Copy the next three elements from v1 to v2
    for (int i = 3; i < 6; ++i) {
        *(v2.data() + i) = *(v1.data() + i);
    }
}

// Function to print a vector of human objects
void PrintVector(const std::vector<human>& v, const std::string& vector_name) {
    std::cout << "\033[32m" << vector_name << " contents:\033[0m" << std::endl;
    std::cout << "\033[34m------------------------------\033[0m" << std::endl;
    for (const auto& person : v) {
        person.display();
    }
    //std::cout << "\033[34m------------------------------\033[0m" << std::endl;
}

int main() {
    // Create vector v1 with default and initialized human objects
    std::vector<human> v1 = { human(), human(), human(), human(170, "ali"), human(180, "ahmet"), human(190, "can") };
    // Create vector v2 with initialized and default human objects
    std::vector<human> v2 = { human(140, "fatma"), human(150, "ayse"), human(160, "selin"), human(), human(), human() };

    // Print the initial contents of vector v1
    PrintVector(v1, "Initial vector v1");

    // Print the initial contents of vector v2
    PrintVector(v2, "\nInitial vector v2");

    // Call the CopyValues function to modify v1 and v2
    CopyValues(v1, v2);

    // Print the contents of vector v1 after copying values
    PrintVector(v1, "\nVector v1 after copying values");

    // Print the contents of vector v2 after copying values
    PrintVector(v2, "\nVector v2 after copying values");

    return 0;
}
