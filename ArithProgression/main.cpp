#include <iostream>
#include <vector>

using namespace std;

bool canMakeArithmeticProgression(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    int amount = arr[1] - arr[0];
    int i = 0;
    int j = 1;
    while (j < arr.size()) {
        if ((arr[j] - arr[i]) != amount) {
            return false;
        }
        i++;
        j++;
    }
    return true;
}

int main() {

    vector<int> one;
    vector<int> two;
    one.push_back(1);
    one.push_back(3);
    one.push_back(5);
    two.push_back(1);
    two.push_back(2);
    two.push_back(4);




    std::cout << canMakeArithmeticProgression(one) << std::endl;
    std::cout << canMakeArithmeticProgression(two) << std::endl;
    return 0;
}
