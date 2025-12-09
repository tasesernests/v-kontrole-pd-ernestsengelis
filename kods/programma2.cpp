#include <iostream>
#include <string>

int main() {
    std::string teksts = "Kad skolēni sabojā git projektu: \"Nu ko… laiks jaunam klonam.\"";
    int skaitlis = 0;
    for (char c : teksts) {
        if (c == 'a' || c == 'A') {
            skaitlis++;
        }
    }
    std::cout << "Burtu 'a' skaits: " << skaitlis << std::endl;
    return 0;
}