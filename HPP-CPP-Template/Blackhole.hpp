#ifndef BLACKHOLE_HPP
#define BLACKHOLE_HPP

#include "Star.hpp"
#include <iostream>
#include <vector>  // Vector requirment

template <class ItemType>
class Blackhole{
    private:
    static const int defaultCapacity = 1000;
    ItemType *starsPointer[defaultCapacity];

    int sumStars;

    std::vector<Star> starCollection;

    public:
    // Function Prototype
    // Default Constructor
    Blackhole();
    
    int getSizeOfBlackhole() const;












};                                                     // ';' requirment of class

#include "Blackhole.cpp"                               // Template requirment
#endif