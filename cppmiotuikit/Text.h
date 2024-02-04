//
// Created by mrybs on 04.02.2024.
//

#ifndef TEXT_H
#define TEXT_H
#include "Object.h"

namespace Ui {
    class Text : public Object{
    public:
        Text(std::string id, std::string text) : Object(std::move(id), "span") {
            classes.emplace_back("UiText");
            innerHTML = text;
        }
    };
}

#endif //TEXT_H
