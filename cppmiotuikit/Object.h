//
// Created by mrybs on 04.02.2024.
//

#ifndef OBJECT_H
#define OBJECT_H

#include <string>
#include <utility>
#include <vector>
#include "Core.h"

namespace Ui {
    class Object {
    protected:
        std::string id;
        std::string tagname;
        std::string innerHTML;
        std::vector<std::string> classes;
        std::vector<MiotUiKit::Attribute> attributes;
        std::vector<Object*> children;

    public:
        explicit Object(std::string id, std::string tagname="div") {
            this->id = std::move(id);
            this->tagname = std::move(tagname);
            this->classes.emplace_back("UiObject");
            innerHTML = "";
        }

        void appendChild(Object& child) {
            children.push_back(&child);
        }

        std::string generate() {
            std::string html;
            html += "<" + tagname + " id=\"" + id + "\" ";
            if(!classes.empty()) html += "class=\"";
            for(const std::string& cls : classes) html += cls + " ";
            if(!classes.empty()) html += "\"";
            for(const MiotUiKit::Attribute& attribute : attributes) html += attribute.name + "=\"" + attribute.value + "\"";
            html += ">";
            html += innerHTML;
            for(Object *child : children) html += child->generate();
            html += "</" + tagname + ">";
            return html;
        }
    };
}

#endif //OBJECT_H
