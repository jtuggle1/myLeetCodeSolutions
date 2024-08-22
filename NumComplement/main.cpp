#include <iostream>

using namespace std;

int findComplement(int num) {
    int c = 1;
    string bin;
    //convert to binary
while (num > 0) {
bin = (char)('0' + (num % 2)) + bin;
    num = num/2;
}
    cout << bin << endl;
    //2s complement
for (int i = 0; i < bin.length(); i++) {
    if (bin[i] == '1') {
        bin[i] = '0';
    } else {
        bin[i] = '1';
    }
}
    cout << bin << endl;
    //convert to int
    int r = 0;
    long long int b = 1;
    for (int j = (bin.length() - 1);j >= 0; j--) {
        r += (b * (bin[j] - '0'));
        b *= 2;
    }

return r;

}

int main() {
    std::cout << findComplement(5) << std::endl;
    return 0;
}
