class Solution {
public:
    string simplifyPath(string path) {
        vector<string> resultV;
        int pointer = 0;
        int l = path.size();
        while(pointer<l){
        	pointer++;
        	string item;
        	while(pointer<l and path[pointer]!='/'){
        		item+=path[pointer];
        		pointer++;
        	}
        	if(item == "." or item =="") continue;
        	if(item == ".."){
        		if(!resultV.empty()) resultV.pop_back();
        		continue;
        	}
        	resultV.push_back(item);
        	
        }
        // combine items into a result
        string result = "";
        for(string item : resultV){
        	result = result + "/" + item;
        }
        if(result == "") result = "/";
        return result;
    }
};
