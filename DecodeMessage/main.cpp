#include <iostream>
#include <map>
#include <string>


using namespace std;

string decodeMessage(string key, string message) {
    string arr = "abcdefghijklmnopqrstuvwxyz";
    map <char,char> m;
    int spot = 0;
    for (int i = 0; i < key.length(); i++){
        if (isalpha(key[i]) && !m.count(key[i])){
            m[key[i]] = arr[spot];
            spot++;
        }


    }
    string ret = "";
    for (int i = 0; i < message.length(); i++){

        if (message[i] == ' '){
            ret += ' ';
        }else{
            ret += m[message[i]];
        }


    }


    return ret;




}


int main() {
    std::cout << decodeMessage("the quick brown fox jumps over the lazy dog","vkbs bs t suepuv") << std::endl;
    return 0;
}
