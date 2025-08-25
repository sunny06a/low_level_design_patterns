// PandaImage.hpp
#pragma once
#include "ImageIcon.hpp"
#include <string>
#include <iostream>

class PandaImage : public ImageIcon {
private:
    std::string filename_;

public:
    PandaImage(const std::string& filename) : filename_(filename) {
        std::cout << "Loading image from: " << filename << std::endl;
    }
    
    void getWidth() override {
        std::cout << "Getting width of " << filename_ << std::endl;
    }
    
    void getHeight() override {
        std::cout << "Getting height of " << filename_ << std::endl;
    }
    
    void display() override {
        std::cout << "Displaying " << filename_ << std::endl;
    }
};