#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    int wordCount = 0;

    cout << "Enter a sentence: ";
    getline(cin, sentence); // Read the entire line, including spaces

    // Iterate through each character in the sentence
    for (int i = 0; i < sentence.length(); i++) {
        // Check if the current character is a space or the last character in the sentence
        if (sentence[i] == ' ' || i == sentence.length() - 1) {
            // If it's a space or the last character, increment the word count
            wordCount++;
        }
    }

    cout << "Number of words in the sentence: " << wordCount << endl;

    return 0;
}
