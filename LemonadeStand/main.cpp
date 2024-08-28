#include <iostream>
#include <vector>

using namespace std;

bool lemonadeChange(vector<int>& bills) {
    int b[3] = {0,0,0};

    for (int i = 0; i < bills.size(); i++){
        //case if $5
        if (bills[i] == 5){
            b[0]++;
        }
        //case if $10
        if (bills[i] == 10){
            b[0]--;
            b[1]++;
        }
        //case if $20
        if (bills[i] == 20){

            //if out of 10s
            if (b[1] == 0 && b[0] > 1){
                b[0]-=3;
            } else{
                b[0]--;
                b[1]--;
            }
            b[2]++;
        }

        //if any number in array goes below 0

        if ((b[0] < 0) || (b[1] < 0) || (b[2] < 0)){
            return false;
        }




    }


    return true;
}
int main() {
    vector<int> arr = {5,10,20};
    bool test = lemonadeChange(arr);
    std::cout << (test ? "true" : "false") << std::endl;
    return 0;
}
