#include <iostream>
#include <string>

using namespace std;

bool isSumEqual(string firstWord, string secondWord, string targetWord) {

    string fws = "";
    string sws= "";
    string tws= "";

    for (int i = 0; i < firstWord.length(); i++){
        fws += (firstWord[i] - '0' - 1);
    }
    for (int i = 0; i < secondWord.length(); i++){
        sws += (secondWord[i] - '0' - 1);
    }
    for (int i = 0; i < targetWord.length(); i++){
        tws += (targetWord[i] - '0' - 1);
    }




    int fw = stoi(fws);
    int sw = stoi(sws);
    int tw = stoi(tws);

    return (tw == (fw + sw));

}

int main() {
    std::cout << isSumEqual("acb", "cba", "cdb") << std::endl;
    return 0;
}
