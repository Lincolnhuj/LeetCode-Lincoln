class MagicDictionary { 
public:
	unordered_map <string,int> dictionary;
    /** Initialize your data structure here. */
    MagicDictionary() {
    	unordered_map <string,int> dictionary;
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for(auto item : dict){
        	if(dictionary[item] ==0) {dictionary[item]++;}
        }
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        for(auto item : dictionary){
        	if(item.first.size() == word.size()) {
        		int flag = 0;
        		for(int i = 0; i< word.size(); i++){
        			if(flag > 1) break;
        			if(item.first[i]!=word[i]){
        				flag++;
        			}
        		}
        		if (flag == 1) return true;
        	}
        }
        return false;
    }
};
