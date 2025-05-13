#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main() {
    string input = "vaibhav chauhan";
    stringstream ss(input);
    vector<string> words;
    string word;

    while (ss >> word) {
        words.push_back(word);
    }

    for (int i = words.size() - 1; i >= 0; i--) {
        cout << words[i];
        if (i != 0) cout << " ";
    }

    return 0;
}
