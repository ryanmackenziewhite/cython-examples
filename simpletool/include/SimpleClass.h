/*
 * SimpleClass.h
 * Copyright (C) 2019 Ryan Mackenzie White <ryan.white4@canada.ca>
 *
 * Distributed under terms of the  license.
 */

#ifndef SIMPLECLASS_H
#define SIMPLECLASS_H


class Simple {
    private:
        int x;

    public:
        Simple(int x);
        int get() const {return x;}
        virtual void display();
};

#endif /* !SIMPLECLASS_H */
