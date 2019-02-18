# distutils: language = c++

from csimpleclass cimport Simple as cSimple

cdef class Simple:
    cdef cSimple *cself

    def __cinit__(self, int x):
        self.cself = new cSimple(x)

    def get(self):
        return self.cself.get()

    def __dealloc__(self):
        del self.cself


