#ifndef INSTACK_H
#define INSTACK_H
#include <iostream>

template <class T>

class Stack { 
private:
    int size;
    T * data;
    int top;
public:
    Stack (int s =100);
    ~Stack ();
    Stack& operator=(const Stack& aux);
    bool Is_full() const;
    bool Is_empty() const;
    void Push(T);
    T Pop();
    void Print() const;
    class SizeError {};
    class EmptyError {};
    class FullError {};
};

#endif