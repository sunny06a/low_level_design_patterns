#include "IteratorInterface.hpp"
#include "../item.hpp"

#pragma once
#include <iostream>

class IteratorDiner : public IteratorInterface {
    private:
        Item* menulist;
        int size;
        int currentIndex;

    public:
        IteratorDiner(Item* menulist, int size) : menulist(menulist), size(size), currentIndex(0) {}

        bool hasNext() const override {
            return currentIndex < size;
        }

        void* next() override {
            if (!hasNext()) {
                return nullptr; // or throw an exception
            }
            return &menulist[currentIndex++];
        }

        void reset() override {
            currentIndex = 0;
        }
};