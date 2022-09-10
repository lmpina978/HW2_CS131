#ifndef vec_h
#define vec_h
#pragma once
#include <iostream>

class Vector{
    private:
    //Member Class Variables
    int size;
    int capacity;
    int *vec;
    public:
    int number;
    //Setter Function Number
    void setNumber(int s){
        number = s;
    }
    //Getter Function Number
    int getNumber(){
        return number;
    }
    //Setter Function Capacity
    void setCapacity(int s){
        capacity = s;
    }
    //Getter Function Capacity
    int getCapacity(){
        return capacity;
    }
    //Member Functions
    void pushBack(int number);
    void pushFront(int number);
    void resize(int capacity);
    void print(int number);
};
#endif
