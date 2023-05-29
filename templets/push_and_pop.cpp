#include <iostream>

template <class T>
class Stack {
    T* arr = nullptr;
    int size = 0;
    int top = -1;

public:
    void push_back(T value) {
        if (size == 0) {
            T* temp = new T[++size];
            if (temp != nullptr) {
                arr = temp;
                arr[++top] = value;
            } else {
                std::cout << "Stack overflow\n";
            }
        } else {
            T* temp = new T[++size];
            if (temp != nullptr) {
                for (int i = 0; i < size - 1; i++) {
                    temp[i] = arr[i];
                }
                temp[top + 1] = value;
                delete[] arr;
                arr = temp;
                top++;
            }
        }
    }

    void pop() {
        if (top != -1) {
            T* temp = new T[--size];
            if (temp != nullptr) {
                for (int i = 0; i < size; i++) {
                    temp[i] = arr[i];
                }
                delete[] arr;
                arr = temp;
                top--;
            }
        } else {
            std::cout << "Stack underflow\n";
        }
    }

    void Top() {
        std::cout << arr[top] << "\n";
    }
};

int main() {
    Stack<int> t;

    t.push_back(5);
    t.push_back(6);
    t.push_back(7);
    t.push_back(8);
    t.push_back(10);

    t.Top();
    t.pop();
    t.Top();

    return 0;
}
