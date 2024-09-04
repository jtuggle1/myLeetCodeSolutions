#include <iostream>

using namespace std;

//not my best coding but need to get a prompt done for the day
//I know its bad practice to use nested ifs

string toBinary(int n) {

    string r;
    while (n!= 0) {

        r = (n%2==0 ? "0" : "1") + r;
        n/=2;
    }
    return r;
}

int binaryGap(int n) {
    int d = 0;
    int curr = 0;
    string e = toBinary(n);

    for (int i = 0; i < e.length(); i++) {
        if (e[i] == '1') {
            if (i != 0){
                curr++;
            }

            if (d < curr) {

                d = curr;
            }
            curr = 0;
        }
        else {
            curr++;
        }


    }
    return d;
}


int main() {
    std::cout << binaryGap(22) << std::endl;
    return 0;
}
