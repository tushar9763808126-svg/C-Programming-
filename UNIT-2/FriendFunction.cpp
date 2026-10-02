#include <iostream>
using namespace std;

class Box {
private:
    int length = 10;

public:
    friend void showLength(Box b);
};

// Friend function definition
void showLength(Box b) {
    cout << "Length of Box = " << b.length;
}

int main() {
    Box b;
    showLength(b);

    return 0;
}