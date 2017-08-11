#include "header.h"
#include "gfx.h"

int main() {
    gfx graphics;
    long long i = 0;
    while (i++ != 1000000 ) {
        graphics.renderGL();
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}