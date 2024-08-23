#include <iostream>
#include <string>
using namespace std;

char getMaxRepeatingChar(const string &str) {
    int freq[256] = {0};  // Array to store frequency of characters
    // Count frequency of each character
    for (char ch : str) {
        freq[ch]++;
        cout<<freq[ch]<<endl;
    }

    // Find the character with the maximum frequency
    char maxChar = '\0';
    int maxFreq = 0;
    for (int i = 0; i < 256; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxChar = static_cast<char>(i);
        }
    }

    return maxChar;
}

int main() {
    string str = "hello world!";
    char maxChar = getMaxRepeatingChar(str);
    cout << "The maximum repeating character is: " << maxChar << endl;
    return 0;
}
