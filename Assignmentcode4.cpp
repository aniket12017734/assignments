#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Stack {
    private:
        vector<T> data;

    public:
        void push(T value) {
            data.push_back(value);
        }

        T pop() {
            T value = data.back();
            data.pop_back();
            return value;
        }

        T peek() {
            return data.back();
        }

        bool is_empty() {
            return data.empty();
        }
};

int main() {
    Stack<int> intStack;

    intStack.push(1);
    intStack.push(2);
    intStack.push(3);

    cout << "Top element: " << intStack.peek() <<endl;
    cout << "Popped element: " << intStack.pop() <<endl;
    cout << "Top element: " << intStack.peek() <<endl;
    return 0;
}