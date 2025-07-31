#include <iostream>
using namespace std;

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