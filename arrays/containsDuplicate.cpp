class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        unordered_set<int> s;

        for(int i = 0; i < nums.size(); i++) {

            if(s.find(nums[i]) != s.end()) {
                return true;
            }

            s.insert(nums[i]);
        }

        return false;
    }
};
//nums = [1,2,3,1]

//Step 1
//Current = 1

//Set
//{}

↓

//Insert
//{1}

//---------------------

//Step 2

//Current = 2

//Set

//{1}

//↓

//Insert

//{1,2}

//---------------------

//Step 3

//Current = 3

//Set

//{1,2}

//↓

//Insert

//{1,2,3}

//---------------------

//Step 4

//Current = 1

//Set

//{1,2,3}

//↓

//Already Exists

//Return TRUE