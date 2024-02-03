#include <iostream>
using namespace std;
template <typename T>
class Swapper {
public:
    static void Swap(T& a, T& b) {
        T temp = a;
        a = b;
        b = temp;
    }
};
int main() {
    int num1 = 5, num2 = 10;
    cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << "\n";

    Swapper<int>::Swap(num1, num2);

    cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << "\n";

    return 0;
}
