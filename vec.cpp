#include "vec.hpp"
void Vector::pushBack(int number){
    size++;
    vec[size] = number;
}
void Vector::pushFront(int number){
    size--;
    vec[size] = number;
}
void Vector::resize(int capacity){
    vec[size] = capacity;
    
}
void Vector::print(int number){
    for (int i = number; i < size; i++){
        std::cout << vec[i] << " ";
    }
}
