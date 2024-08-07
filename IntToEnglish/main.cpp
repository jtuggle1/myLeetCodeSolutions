#include <iostream>
#include <string>
using namespace std;

string onesHelper(char v){
    if (v == '1'){
        return "One";
    }
    if (v == '2'){
        return "Two";
    }
    if (v == '3'){
        return "Three";
    }
    if (v == '4'){
        return "Four";
    }
    if (v == '5'){
        return "Five";
    }
    if (v == '6'){
        return "Six";
    }
    if (v == '7'){
        return "Seven";
    }
    if (v == '8'){
        return "Eight";
    }
    if (v == '9'){
        return "Nine";
    }
    return "";
}

string tensHelper(string v){\
    string r = " ";
    if (v[0] == '0'){
        r += onesHelper(v[1]);
    }
    //in teens
    if (v[0] == '1'){

        if (v[1] == '0'){
            r += "Ten";
        }
        if (v[1] == '1'){
            r += "Eleven";
        }
        if (v[1] == '2'){
            r += "Twelve";
        }
        if (v[1] == '3'){
            r += "Thirteen";
        }
        if (v[1] == '4'){
            r += "Fourteen";
        }
        if (v[1] == '5'){
            r += "Fifteen";
        }
        if (v[1] == '6'){
            r += "Sixteen";
        }
        if (v[1] == '7'){
            r += "Seventeen";
        }
        if (v[1] == '8'){
            r += "Eighteen";
        }
        if (v[1] == '9'){
            r += "Nineteen";
        }


    }

    if (v[0] == '2'){
    r += "Twenty " + onesHelper(v[1]);
    }
    if (v[0] == '3'){
        r += "Thirty " + onesHelper(v[1]);
    }
    if (v[0] == '4'){
        r += "Forty " + onesHelper(v[1]);
    }
    if (v[0] == '5'){
        r += "Fifty " + onesHelper(v[1]);
    }
    if (v[0] == '6'){
        r += "Sixty " + onesHelper(v[1]);
    }
    if (v[0] == '7'){
        r += "Seventy " + onesHelper(v[1]);
    }
    if (v[0] == '8'){
        r += "Eighty " + onesHelper(v[1]);
    }
    if (v[0] == '9'){
        r += "Ninety " + onesHelper(v[1]);
    }



    return r;
}

//helper method for hundreds
string hundredHelper(string v){
    string r = " ";

    //if all zeroes
    if (v == "000"){
        return r;
    }

    //if hundred
if (v.length() == 3){
    r = onesHelper(v[0]) + " Hundred";
    r += tensHelper(v.substr(1,2));
} //if 10s
else if (v.length() == 2){
    r += tensHelper(v.substr(0,2));
} //if ones
else{
    r += onesHelper(v[0]);
}

return r;
}

string numberToWords(int num){

    string number = "";
    string value = "";
    int count = 1;

    //get length of digit
    string w = to_string(num);
    int wl = w.length();


   //less than thousand
    if (wl < 4){
        number += hundredHelper(w.substr(0,3));
    }

    //thousand
    if (wl > 3 && wl < 7){
    number += hundredHelper(w.substr(0,wl - 3)) + "Thousand";
        number += hundredHelper(w.substr(3,3));
    }

    //million
    if (wl > 6 && wl < 10){


    }

    //billion
    if (wl > 9){
        //can only be 1 or 2 billion
        if (w[0] == '1'){
            number += "One Billion";
        } else{
            number += "Two Billion";
        }

    }



    return number;

}



int main() {
    std::cout << numberToWords(10001) << std::endl;
    return 0;
}
