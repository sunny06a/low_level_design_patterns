#include "IteratorInterface.hpp"
#include "../item.hpp"
#pragma once
#include <iostream>
#include <vector>


class IteratorPanCake : public IteratorInterface {
    private:
        std::vector<Item> items;
        size_t currentIndex;

    public:
        IteratorPanCake(const std::vector<Item>& items) : items(items), currentIndex(0) {}

        bool hasNext() const override {
            return currentIndex < items.size();
        }

        void* next() override {
            if (!hasNext()) {
                throw std::out_of_range("No more items in iterator");
                return nullptr;
            }
            return &items[currentIndex++];
        }

        void reset() override {
            currentIndex = 0;
        }
};
