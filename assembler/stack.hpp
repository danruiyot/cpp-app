#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_
////////////////////////////////////////////////////////////////////////////
//
// File: stack.hpp
//
// Programmer: Ahmed Alsaleh
// Updated:    03/2020
//
//
// Do not change the names of the classes or methods.  Otherwise, instructor
//  tests will not work.
//

#include <new>

////////////////////////////////////////////////////////////////////////////
//           
template<typename T> 
class Node {
    public:
        Node() : next(0) {};
        Node(T item) : data(item), next(0) {};
        //Node(<T> item) : { data(item); next(0);};
        T data;
        Node<T> *next;
};


////////////////////////////////////////////////////////////////////////////
// CLASS INV:
//
//    
template <typename T>
class stack {
public:
              stack     () : tos(0) {};
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T> rhs) {swap(rhs); return *this; };
	bool      empty     () const {return tos == 0;};
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};

template <typename T>
T stack<T>::top() const {
    return tos->data;
}


template <typename T>
void stack<T>::push(const T& item) {
    //assert(!full());
    Node<T> *temp = new Node<T>(item);
    temp->next = tos;
    tos = temp;    
}

template <typename T>
T stack<T>::pop() {
    //assert(!empty());
    T result = tos->data;
    Node<T> *temp = tos;
    tos = tos->next;
    delete temp;
    return result;
}


template <typename T>
stack<T>::~stack() {
    Node<T> *temp;
    while(tos != 0){
        temp = tos;
        tos = tos->next;
        delete temp;
    }
}

template <typename T>
stack<T>::stack(const stack<T>& actual) : stack() {
    //std::cout << "Copy Ctor Stack" << std::endl;
    Node<T> *temp = actual.tos;
    Node<T> *bottom;
    while(temp != 0){
        //std::cout << "While" << std::endl;
        if(tos == 0){
            //std::cout << "If" << std::endl;
            tos = new Node<T>(temp->data);
            bottom = tos;
        }
        else {
            //std::cout << "Else" << std::endl;
            bottom->next = new Node<T>(temp->data);
            bottom = bottom->next;
        }
        temp = temp->next;
    }
}

template <typename T>
void stack<T>::swap(stack<T>& rhs){
    Node<T> *temp = tos;
    tos = rhs.tos;
    rhs.tos = temp;
}

template <typename T>
bool stack<T>::full() const {
    Node<T> *temp = new Node<T>();
    if(temp == 0) return true;
    delete temp;
    return false;
}


#endif

