#include <cassert>
#include <fstream>
#include <iostream>
#include <memory>

const char newline = '\n';
/**
 * @brief  main program for Object-oriented programming (OOP)
 * @author: Amer Andersson
 * @conutry: Sweden
 * @date: 2024
 * @return 0 when program execution completes successfully.
 */

// Unique_ptr is move-only and its move constructor nulls out the source pointer
template <class T>
class unique_ptr {
    T *p_ = nullptr;

   public:
    ~unique_ptr() { delete p_; }
};

// std::unique_ptr<T[]>  with an array
template <class T>
class unique_ptr<T[]> {
    T *p_ = nullptr;

   public:
    ~unique_ptr() { delete[] p_; }
};

// std::unique_ptr<T, Deleter>  with default_delete
template <class T, class Deleter = std::default_delete<T>>
class unique_ptr {
    T *p_ = nullptr;
    deleter d_;

   public:
    ~unique_ptr() {
        if (p_) d_(p_);
    }
};

template <class T>
struct default_delete {
    void operator()(T *p) const { delete p; }
};

// Custom deleter can do neat thing,
// std::unique_ptr<T, Deleter>  with default_delete
struct FileCloser {
    void operator()(FILE *fp) const {
        assert(fp != nullptr);
        fclose(fp);
    }
};
// Read the filename input:
FILE *fp = fopen("input.txt", "r");
std::unique_ptr<FILE, FileCloser> uptr(fp);

class MyClass {
   public:
    MyClass() {
        std::cout << "MyClass constructor\n";
    }

    ~MyClass() {
        std::cout << "MyClass destructor\n";
    }
};

int main() {
    std::unique_ptr<MyClass> uptr(new MyClass());
    // Transfer ownership
    std::unique_ptr<MyClass> another_uptr = std::move(uptr);
    return 0;
}
