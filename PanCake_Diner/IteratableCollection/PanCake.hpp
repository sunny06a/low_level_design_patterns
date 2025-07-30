#pragma once
#include "Iteratable.hpp"
#include "../Iterator/IteratorPanCake.hpp"
#include <iostream>
#include <vector>

class PanCake : public IteratableCollectionInterface {
    private:
        std::vector<Item> items;

    public:
        Item* getItem(int index) const override {
            if (index < 0 || index >= static_cast<int>(items.size())) {
                return nullptr;
            }
            return const_cast<Item*>(&items[index]);
        }

        int getSize() const override {
            return static_cast<int>(items.size());
        }

        void addItem(Item* item) override {
            if (item) {
                items.push_back(*item);
            }
        }

        void removeItem(int index) override {
            if (index < 0 || index >= static_cast<int>(items.size())) {
                return;
            }
            items.erase(items.begin() + index);
        }

        void clear() override {
            items.clear();
        }

        IteratorInterface* CreateIterator() const override {
            return new IteratorPanCake(items); // Assuming IteratorPanCake is defined elsewhere
        }
};