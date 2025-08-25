#pragma once

#include "ImageIcon.hpp"
#include "PandaImage.hpp"

#include <string>


class ImageIconProxy : public ImageIcon {
    
private:
    std::string filename_;
    ImageIcon* image_icon_;
    
public:
    ImageIconProxy(const std::string& filename) : filename_(filename), image_icon_(
        nullptr) {}
    void display() override {
        if (image_icon_ == nullptr) {
            image_icon_ = new PandaImage(filename_);
        }
        image_icon_->display();
    }
    void getWidth() override {
        if (image_icon_ == nullptr) {
            image_icon_ = new PandaImage(filename_);
        }
        image_icon_->getWidth();
    }
    void getHeight() override {
        if (image_icon_ == nullptr) {
            image_icon_ = new PandaImage(filename_);
        }
        image_icon_->getHeight();
    }
    ~ImageIconProxy() {
        delete image_icon_;
    }
};