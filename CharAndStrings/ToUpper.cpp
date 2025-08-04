#include <iostream>
#include <cstring>
using namespace std;

/*
Problem: Convert lowercase letters in string to uppercase.
Input: A character array/string.
Output: String with all letters converted to uppercase.
Concept: ASCII value manipulation for case conversion.
*/

void toUpper(char word[], int n) {
    for(int i = 0; i < n; i++) {
        char ch = word[i];
        if ('A' <= ch && ch <= 'Z' )
        {
            continue; 
        } else {
           word[i] = ch - 'a' + 'A';
        }
        
    }
}


int main() {
    char word[] = "ApPle";
    toUpper(word,strlen(word));
    cout << word;
    return 0;
}