class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        int n = queries[0].size();      //length of words is same so queries[0]th is same throughout
        vector<string> res;              //vector to be returned
        //so first loop runs the quries 
        //second loop runs till dictionary like for each queries it goes on search in dictionary 
        for(auto it : queries){            
            for(auto i : dictionary){
                int diff = 0;                //difference is stored in diff 
                for(int idx = 0 ; idx < n ; idx++){          //idx till word size 
                    if(it[idx] != i[idx]){        // it[idx] means the first word's first character in queries and dictionary is checked
                        diff++;                        //if not equal then increment diff by 1 
                    }
                    if(diff > 2)break;              //if diff is greater than 2 then according to question it should not be greater than 2 so break
                }
                if(diff <= 2){
                    res.push_back(it);              //here if the diff is less than 2 then push queries's it into the res vector and break
                    break;
                }
            }
        }
        return res;              //return the vector res
    }
};
