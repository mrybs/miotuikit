//
// Created by mrybs on 04.02.2024.
//

#ifndef BUTTON_H
#define BUTTON_H

#include "Object.h"

namespace Ui {
    class Button : public Object{
    public:
        Button(std::string id, std::string text, std::string color="", std::string style_type="") : Object(std::move(id), "button") {
            classes.emplace_back("UiButton");
            attributes.push_back({"color", std::move(color)});
            attributes.push_back({"style_type", std::move(style_type)});
            innerHTML = std::move(text);
        }
    };
}

#endif //BUTTON_H
