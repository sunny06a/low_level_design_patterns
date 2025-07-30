#pragma once
#include "Iteratable.hpp"
#include "../Iterator/IteratorDiner.hpp"
#include "../item.hpp"
#include <iostream>

class Diner : public IteratableCollectionInterface {
    private:
        Item* items;
        int capacity;
        int count;

    public:
        Diner(int maxItems = 100) : capacity(maxItems), count(0) {
            
        }

        ~Diner() {
            delete[] items;
        }

        Item* getItem(int index) const override {
            if (index < 0 || index >= count) {
                return nullptr;
            }
            return &items[index];
        }

        int getSize() const override {
            return count;
        }

        void addItem(Item* item) override {
            if (item && count < capacity) {
                items[count++] = *item;
            }
        }

        void removeItem(int index) override {
            if (index < 0 || index >= count) {
                return;
            }
            for (int i = index; i < count - 1; ++i) {
                items[i] = items[i + 1];
            }
            --count;
        }

        void clear() override {
            count = 0;
        }

        IteratorDiner* CreateIterator() const override {
            return new IteratorDiner(items, count); // Make sure IteratorDiner supports this constructor
        }
};