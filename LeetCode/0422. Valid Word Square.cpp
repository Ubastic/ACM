class Solution {
public:
    bool validWordSquare(vector<string>& words) {
        for (int i = 0; i < words.size(); i++) {
            for (int j = 0; j < words[i].size(); j++) {
                if (j >= words.size() or i >= words[j].size() or words[i][j] != words[j][i]) {
                    return false;
                }
            }
        }
        return true;
    }
};
