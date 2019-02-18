# distutils: language = c++

cdef extern from "../include/SimpleClass.h":
    cdef cppclass Simple:
        Simple(int x)
        int get()
