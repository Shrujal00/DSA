#include <iostream>
using namespace std;

/*
Problem: Remove duplicate characters from a string.
Input: A string with possible duplicate characters.
Output: String with duplicates removed, maintaining order.
Concept: Recursion with character frequency mapping.
*/

void removeDuplicates(string str, string ans, int i, int map[26]){
    if(i == str.size()) {
        cout << "Ans: " << ans << endl;
    }

    int mapIdx = (int)(str[i] - 'a');
    
    if(map[mapIdx]) { // duplicate
        removeDuplicates(str,ans,i+1,map);
    } else{ // not duplicate
        map[mapIdx] = true;
        removeDuplicates(str, ans+str[i], i+1, map);
    }
}


int main() {
    string str = "sshhrrujal";
    string ans = "";
    int map[26] = {false};
    removeDuplicates(str,ans,0,map);
    return 0;
}