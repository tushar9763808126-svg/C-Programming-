#include <iostream>
using namespace std;

class Math {
public:
    inline int cube(int x) {
        return x * x * x;
    }
};

int main() {
    Math m;
    int result = m.cube(5);

    cout << "Cube of 5 = " << result;

    return 0;
}