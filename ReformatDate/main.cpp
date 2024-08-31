#include <iostream>
#include <string>

using namespace std;

string reformatDate(string date) {
    string r = "";
    for (int i = date.length() - 4; i < date.length(); i++) {
        r += date[i];
    }
    r += "-";

    switch(date[date.length() - 8]) {
        case 'J':
            if (date[date.length() - 7] == 'a') {
                r += "01";
            } else if (date[date.length() - 6] == 'n') {
                r += "06";
            } else {
                r += "07";
            }
        break;
        case 'F':
            r+= "02";
        break;
        case 'M':
            if (date[date.length() - 6] == 'r') {
                r += "03";
            } else {
                r += "05";
            }
        break;
        case 'A':
            if (date[date.length() - 7] == 'p') {
                r += "04";
            } else {
                r += "08";
            }
        break;
        case 'S':
            r += "09";
        break;
        case 'O':
            r += "10";
        break;
        case 'N':
            r += "11";
        break;
        case 'D':
            r += "12";
        break;
    }

    r += "-";

    if (std::isdigit(date[1])){
        r += date[0];
        r += date[1];
    } else {
        r += "0";
        r += date[0];
    }



    return r;
}

int main() {
    std::cout << reformatDate("20th May 2052") << std::endl;
    return 0;
}
