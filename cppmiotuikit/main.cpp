//
// Created by mrybs on 04.02.2024.
//

#include "Button.h"
#include "Object.h"
#include "File.h"
#include "Text.h"

using namespace Ui;

int main() {
    auto root = Object("root");
    auto btn = Button("btn", "hello world");
    auto text = Text("txt", "Simple text");
    root.appendChild(btn);
    root.appendChild(text);
    auto file = MiotUiKit::File(root, "cppmiotuikit test");
    file.save("index.html");
    return 0;
}