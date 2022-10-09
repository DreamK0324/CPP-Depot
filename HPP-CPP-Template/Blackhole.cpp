#include "Blackhole.hpp"
#include <iostream>

// Default Construtor
template<class ItemType>
Blackhole<ItemType>::Blackhole(): sumStars(0){
}


template<class ItemType>
int Blackhole<ItemType>::getSizeOfBlackhole() const{
    return sumStars;
}
