#pragma once
#include<iostream>
#include "Iterator/IteratorPancake.hpp"
#include "IteratableCollection/PanCake.hpp"
#include "IteratableCollection/Diner.hpp"
#include "Iterator/IteratorDiner.hpp"



class Client {
    private:
        IteratableCollectionInterface* collection1;
        IteratableCollectionInterface* collection2;
        IteratorInterface* iterator1;
        IteratorInterface* iterator2;
    public:
        Client() {
            collection1 = new PanCake();
            collection2 = new Diner(10); // Assuming Diner can take a max size

            // Adding items to PanCake collection
            collection1->addItem(new Item("Pancake 1", 5.99, "Delicious pancake with syrup"));
            collection1->addItem(new Item("Pancake 2", 6.99, "Fluffy pancake with butter"));

            // Adding items to Diner collection
            collection2->addItem(new Item("Diner Item 1", 8.99, "Classic diner burger"));
            collection2->addItem(new Item("Diner Item 2", 9.99, "Diner fries"));

            iterator1 = collection1->CreateIterator();
            iterator2 = collection2->CreateIterator();
        }
        ~Client() {
            delete collection1;
            delete collection2;
            delete iterator1;
            delete iterator2;
        }
        void displayItems() {
            std::cout << "Items in PanCake Collection:" << std::endl;
            while (iterator1->hasNext()) {
                Item* item = static_cast<Item*>(iterator1->next());
                std::cout << item->getName() << " - $" << item->getPrice() << " - " << item->getDescription() << std::endl;
            }

            std::cout << "\nItems in Diner Collection:" << std::endl;
            while (iterator2->hasNext()) {
                Item* item = static_cast<Item*>(iterator2->next());
                std::cout << item->getName() << " - $" << item->getPrice() << " - " << item->getDescription() << std::endl;
            }
        }
        void resetIterators() {
            iterator1->reset();
            iterator2->reset();
        }
};

