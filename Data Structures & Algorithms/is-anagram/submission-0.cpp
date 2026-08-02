class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        unordered_map<char,int>freq1;
        unordered_map<char,int>freq2;
        for(int i=0;i<s.size();i++){
            freq1[s[i]]++;
        }
        for(int j=0;j<t.size();j++){
            freq2[t[j]]++;
        }
        for (auto it : freq1) {
            if (freq2[it.first] != it.second) {
                return false;
            }
        }
        return true;

    }
};
