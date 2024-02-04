//
// Created by mrybs on 04.02.2024.
//

#ifndef CONTAINER_H
#define CONTAINER_H

#include "Object.h"

namespace Ui {
    class Container : public Object {
    public:
        Container(std::string id, std::string level="0") : Object(std::move(id), "div"){
            classes.push_back("UiContainer");
            attributes.push_back({"level", std::move(level)});
        }
    };
}

#endif //CONTAINER_H
