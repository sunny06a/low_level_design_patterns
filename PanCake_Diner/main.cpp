#include "client.cpp"

int main() {
    Client client;

    // Display items in both collections
    client.displayItems();

    // Reset iterators if needed
    client.resetIterators();

    return 0;
}