#pragma once

class IteratorInterface {
    public:
        virtual bool hasNext() const =  0;
        virtual void* next() = 0; 
        virtual void reset() = 0; 
};