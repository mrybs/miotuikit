//
// Created by mrybs on 04.02.2024.
//

#ifndef FILE_H
#define FILE_H

#include <fstream>
#include "Object.h"

namespace MiotUiKit {
    class File {
    protected:
        Ui::Object* root;
        std::string title;

    public:
        File(Ui::Object& root, const std::string& title) {
            this->root = &root;
            this->title = title;
        }

        std::string generate() {
            std::string html;
            html += "<!DOCTYPE HTML><html><head>";
            html += "<title>" + title + "</title>";
            html += "</head><body>";
            html += root->generate();
            html += "</body></html>\n";
            return html;
        }

        void save(const std::string& path) {
            std::ofstream file;
            file.open(path);
            file << generate();
            file.close();
        }
    };
}

#endif //FILE_H
