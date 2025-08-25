
#include "./ImageIcon/ImageIcon.hpp"
#include "./ImageIcon/ImageIconProxy.hpp"
#include <iostream>

int main() {
    ImageIcon* icon = new ImageIconProxy("test.png");
    icon->display();
    icon->display();
    delete icon;
    return 0;
}