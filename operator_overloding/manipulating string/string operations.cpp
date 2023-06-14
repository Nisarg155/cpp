#include <iostream>
#include <cstring>

using namespace std;

class string1;

ostream& operator<<(ostream&, const string1&);

class string1 {
    char* ptr = nullptr;
    int length = 0;

public:
    string1(const char* ptr = nullptr) {
        length = strlen(ptr);
        try {
            this->ptr = new char[length + 1];
            strcpy(this->ptr, ptr);
        } catch (...) {
            cout << "string can't hold such a character\n";
        }
    }

    // Copy constructor
    string1(const string1& other) {
        length = other.length;
        try {
            ptr = new char[length + 1];
            strcpy(ptr, other.ptr);
        } catch (...) {
            cout << "string can't hold such a character\n";
        }
    }

    // Assignment operator overload
    string1& operator=(const string1& other) {
        if (this == &other) {
            return *this;
        }
        delete[] ptr;
        length = other.length;
        try {
            ptr = new char[length + 1];
            strcpy(ptr, other.ptr);
        } catch (...) {
            cout << "string can't hold such a character\n";
        }
        return *this;
    }

    ~string1() {
        delete[] ptr;
    }

    void show() const {
        cout << ptr;
    }

    friend ostream& operator<<(ostream&, const string1&);
};

ostream& operator<<(ostream& cout, const string1& s) {
    s.show();
    return cout;
}

int main() {
    string1 s;
    s = "nisarg";
    cout << s << endl;

    return 0;
}
