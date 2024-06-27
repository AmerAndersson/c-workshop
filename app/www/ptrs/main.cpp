#include <iostream>
#include <memory>
#include <vector>
#include <string>

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
class unique_ptr
{
    T *p_ = nullptr;

public:
    ~unique_ptr()
    {
        delete p_;
    }
};

// Unique_ptr array
template <class T>
class unique_ptr<T[]>
{
    T *p_ = nullptr;

public:
    ~unique_ptr()
    {
        delete[] p_;
    }
};

template <class T, class Deleter = std::default_delete<T>>
class unique_ptr
{
    T *p_ = nullptr;
    deleter d_;

public:
    ~unique_ptr()
    {
        if (p_)
            d_(p_);
    }
};

template <class T>
struct default_delete
{
    void operator()(T *p) const
    {
        delete p;
    }
};
int main()
{

    return 0;
}