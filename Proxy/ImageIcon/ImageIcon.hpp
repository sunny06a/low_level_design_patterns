#pragma once
#include <string>

class ImageIcon {
private:
    std::string filename_;

public:
    ImageIcon(const std::string& filename) : filename_(filename) {

    }
    
    ImageIcon() = default;
    
    virtual void getWidth() {  }
    virtual void getHeight() {  }
    virtual void display() {  }
};