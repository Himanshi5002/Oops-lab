#include <iostream>
#include <cstring>
using namespace std;

class STROverload {
private:
    char str[100];

public:
    // Constructor
    STROverload(const char* s = "") {
        strcpy(str, s);
    }

    // Friend function to overload pre-increment (i.e., ++obj)
    friend STROverload& operator++(STROverload& obj) {
        // Convert all characters to uppercase (just as an example)
        for (int i = 0; obj.str[i] != '\0'; ++i) {
            obj.str[i] = toupper(obj.str[i]);
        }
        return obj;
    }

    // Friend function to overload post-increment (i.e., obj++)
    friend STROverload operator++(STROverload& obj, int) {
        STROverload temp = obj; // Save the current state (for post-increment behavior)
        ++obj; // Use the pre-increment version to change the string
        return temp; // Return the old value (pre-increment state)
    }

    // Display function
    void display() const {
        cout << str << endl;
    }
};

int main() {
    STROverload obj("hello");

    cout << "Original string: ";
    obj.display();

    ++obj;  // Pre-increment (++obj)
    cout << "After pre-increment: ";
    obj.display();

    obj++;  // Post-increment (obj++)
    cout << "After post-increment: ";
    obj.display();

    return 0;
}
