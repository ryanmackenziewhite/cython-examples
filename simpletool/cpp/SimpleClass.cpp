/*
 * SimpleClass.cpp
 * Copyright (C) 2019 Ryan Mackenzie White <ryan.white4@canada.ca>
 *
 * Distributed under terms of the  license.
 */

#include <iostream>
#include "SimpleClass.h"

Simple::Simple(int x): x(x) {}

void Simple::display(){
    std::cout<< "A simple class with value" << this->x << std::endl;
}

