#include "IntStack.h"


template <class T> Stack<T>::Stack (int s) : size(s) {
    if (s<0) {
        throw SizeError ();
    }
    else {
        this->top = 0;
        this->data = new int [size]; 
    }
}

template <class T> Stack<T>::~Stack () {
    delete [] data;
}

template <class T> Stack<T>& Stack<T>::operator= ( const Stack& autre ) {
    if (this!= &autre){
        delete [] data ;
        size = autre.size;
        data = new T [ size ];
        top = autre.top ;
        for (int i = 0; i <= top; i ++)
            data[i] = autre.data[i];}
    return *this;
}

template <class T> inline bool Stack<T>::Is_full () const {
    return (this->top == size);
}


template <class T> inline bool Stack<T>::Is_empty () const {
    return (this->size == 0);
}

template <class T> inline void Stack<T>::Push (T x) {
    if (!this->Is_full())
        {this->data[top] = x;
        this->top = this->top +1;}
    else {
        throw FullError ();
    }
}

template <class T> inline T Stack<T>::Pop () {
    if (this->Is_empty()) 
    {throw EmptyError ();}
    else
    {this->top = this->top -1;
    return data[size];}
}

template <class T> inline void Stack<T>::Print () const {
    std::cout << "[";
    int i=0;
    for (;i < this->top -1; ++i) {
        std::cout << this->data[i] << ",";
    }
    if (i<this->top) {
        std::cout << this->data[i];
    }
    std::cout << "]" << std::endl;
}