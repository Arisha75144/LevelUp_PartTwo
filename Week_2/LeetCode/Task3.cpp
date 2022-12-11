//
// Created by Морозова Арина on 11.12.2022.
//

#include <set>
#include <string>

class Solution {
public:
    bool checkIfPangram(std::string sentence) {

        auto pan = std::set(sentence.begin(), sentence.end());

        return pan.size() == 26;

    }
};