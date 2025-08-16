class Solution {
public:
void find(vector<int>&candidates,vector<vector<int>>&ans,vector<int>&temp,int sum,int target,int index){

     if(sum==target){
        ans.push_back(temp);
        return;
    }
    if(index==candidates.size() ||sum>target){
        return;
    }
 
    find(candidates,ans,temp,sum,target,index+1);
    temp.push_back(candidates[index]);
    find(candidates,ans,temp,sum+candidates[index],target,index);
    temp.pop_back();
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>ans;
       vector<int>temp;
       find(candidates,ans,temp,0,target,0);
       return ans; 
    }
};



