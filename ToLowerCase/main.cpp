#include <iostream>
#include <string>

using namespace std;

string toLowerCase(string s) {
    string r = "";
    for (int i = 0; i < s.length(); i++){
        if (s[i] > 64 && s[i] < 91){
            s[i] +=32;
        }
        r += s[i];
    }

    return r;
    }

int main() {
    std::cout << toLowerCase("HELLO") << std::endl;
    return 0;
}
