#pragma once

#include <iostream>

template <typename T>
class Array {
    private:
        T    *data;
        int    s;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        ~Array(void);

        T&        operator[](int idx) const;
        Array&    operator=(const Array& other);
        int       getSize() const;
        void      getData() const;
};


template <typename T>
Array<T>::Array()
{
    data = NULL;
    s = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) 
{
    data = new T[n];
    s = n; 
}

template <typename T>
Array<T>::Array(const Array& copy)
{
    data = NULL;
    s = 0;
    *this = copy;
}

template <typename T>
Array<T>::~Array()
{
    delete[] this->data;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj)
{
    delete[] this->data;
    this->s = obj.s;
    this->data = new T[s];
    for (int i = 0; i < s; i++)
    {
        if (i < 0 || i >= this->s)
            throw std::overflow_error("Index out of bounds");
        this->data[i] = obj.data[i];
    }
    return *this;
}

template <typename T>
int Array<T>::getSize() const
{
    return this->s;
}


template <typename T>
void Array<T>::getData() const
{
    for (int i = 0; i < s; i++)
    {
        if (i < 0 || i >= this->s)
            throw std::overflow_error("Index out of bounds");
        std::cout << this->data[i] << std::endl;
    }
}

template <typename T>
T &Array<T>::operator[](int i) const
{
    if (i < 0 || i >= this->s)
        throw std::overflow_error("Index out of bounds");
    return this->data[i];
}
