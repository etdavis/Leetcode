#include <string>
#include <unordered_map>
using namespace std;

//383. Ransom Note
/*
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.
*/

//less efficient solution
class Solution1 {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mag_letters;
        for (char mag_letter : magazine) {
            if(mag_letters.count(mag_letter)) {
                mag_letters[mag_letter]++;
            }
            else {
                mag_letters.insert({mag_letter, 1});
            }
        }
        for (char note_letter : ransomNote) {
            if (mag_letters.count(note_letter)) {
                mag_letters[note_letter]--;
                if (mag_letters[note_letter] <= 0) {
                    mag_letters.erase(note_letter);
                }
            }
            else {
                return false;
            }
        }
        return true;
    }
};

//more efficient solution
class Solution2 {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> note_letters;
        for (char note_letter : ransomNote) {
            if(note_letters.count(note_letter)) {
                note_letters[note_letter]++;
            }
            else {
                note_letters.insert({note_letter, 1});
            }
        }
        for (char mag_letter : magazine) {
            if (note_letters.count(mag_letter)) {
                note_letters[mag_letter]--;
                if (note_letters[mag_letter] <= 0) {
                    note_letters.erase(mag_letter);
                }
            }
            if(note_letters.empty()) {
                return true;
            }
        }
        return false;
    }
};
