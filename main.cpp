#include "IntStack.cpp"

int main() {
    Stack<int> my_stack;
    my_stack.Push(8);
    my_stack.Push(10);
    my_stack.Print();
    my_stack.Pop();
    my_stack.Pop();
    my_stack.Push(77);
    my_stack.Print();
    my_stack.Push(20);
    my_stack.Push(25);
    Stack<int> my_stack2 (1);
    my_stack2.Push(8);
    try {my_stack2.Push(18);}
    catch ( Stack<int>::FullError ) {};
    my_stack2.Print();
    my_stack2 = my_stack;
    my_stack2.Print();
    my_stack.Print();
}
