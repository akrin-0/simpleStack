#ifndef SIMPLESTACK_SIMPLESTACK_H
#define SIMPLESTACK_SIMPLESTACK_H

#include <algorithm>

template <typename T>
class SimpleStack {
    struct simpleLinkedList {
        simpleLinkedList* prev_address{};
        T current_value{};
    };
    std::size_t length{};
    simpleLinkedList* current_address{};
public:
    SimpleStack() = default;
    SimpleStack(std::initializer_list<T> a) {
        std::for_each(std::begin(a), std::end(a), [this](T val){
            auto* a = new simpleLinkedList;
            a->current_value = val;
            a->prev_address = current_address;
            ++length;
            current_address = a;
        } );
    }

    std::pair<bool, std::size_t> pushhh(T val) {
        auto* a = new simpleLinkedList;
        a->current_value = val;
        a->prev_address = current_address;
        ++length;
        current_address = a;
        return {true, length};
    }
    std::pair<bool, std::size_t> pushhh(std::initializer_list<T> a) {
        std::for_each(std::begin(a), std::end(a), [this](T val){
            auto* a = new simpleLinkedList;
            a->current_value = val;
            a->prev_address = current_address;
            ++length;
            current_address = a;
        } );
        return {true, length};
    }

    std::pair<bool, std::size_t> poppp() {
        auto* _prev_address = current_address;
        T current_value = current_address->current_value;
        current_address = current_address->prev_address;
        delete _prev_address;
        --length;
        return {true, length};
    }

    T toppp() {
        if (current_address) {return current_address->current_value;}
        else {
            throw std::runtime_error("No value in stack.");
        }
    }

    bool is_emptyyy() {
        return length == 0;
    }
};


#endif //SIMPLESTACK_SIMPLESTACK_H
