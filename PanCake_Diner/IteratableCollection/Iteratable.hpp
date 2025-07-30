#pragma once
#include "../item.hpp"
#include "../Iterator/IteratorInterface.hpp"

class IteratableCollectionInterface{
    public:
        virtual Item* getItem(int index) const = 0;
        virtual int getSize() const = 0;
        virtual void addItem(Item* item) = 0;
        virtual void removeItem(int index) = 0;
        virtual void clear() = 0;
        virtual IteratorInterface* CreateIterator() const = 0; // Returns an iterator for the collection
};