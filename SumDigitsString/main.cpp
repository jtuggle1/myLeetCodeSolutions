#include <iostream>
#include <string>

using namespace std;

int getLucky(string s, int k) {
    string r = "";
    int w = 0;
    int l = 0;


    //init
    for (int i = 0; i < s.length(); i++){
        r += to_string(s[i] - 'a' + 1);
    }


    //transform k times
    for (int i = 0; i < k; i++){

        //add and transform
        for (int j = 0; j < r.length(); j++){
            w += (r[j] - '0');
        }
        l = w;
        r = to_string(l);
        w = 0;
    }



    return l;



}

int main() {
    std::cout << getLucky("iiii",1) << std::endl;
    return 0;
}
