//the solution of the sum of two numbers
//the first case about C++
class Solution{//violent solution
  vector<int> twoSum(vector<int> &nums,int target){
    for(int i = 0;i < nums.size()-1;++i)
      for(int j = i+1;j < nums.size();++j)
        if(target==nums[i]+nums[j]){
          return {i,j};
        }
    return ;
  }
};
//the first case about c
int* twoSum(int* nums,int target,int numsSize,int* returnSize)
{
  int* result=NULL;
  *returnSize=2;
  for(int i=0;i < numsSzie-1;++i)
    for(int i=0;i < numsSize;++j)
      if(target==nums[i]+nums[j]){
        result=(int*)malloc(sizeof(int)*2);
        result[0]=i;
        result[1]=j;
        return result;
      }
  return result;
}
//the second case about c++ :hash map 1
class Solution{
  vector<int> towSum(vector<int> &nums,int target){
    vector<int> b(2,-1)；
    map<int,int> a;
    for(int i=0;i<nums.size();++i)
      a.insert(map<int,int>::value_type (nums[i],i));
    for(int i=0;i<nums.size();++i){
      if(a.count(target-nums[i])>0 && a[target-nums[i]]!=i){
        b[0]=i;
        b[1]=a[target-nums[i]];
        return b;
      }
    }
    return b;
  }
};
//the third case about c++:hash map 2
class Solution{
  vector<int> towSum(vector<int> &nums,int target){
    vector<int> b(2,-1);
    map<int,int> a;
    for(int i=0;i<nums.size();++i){
      if(a.count(target-nums[i])){
        b[0]=a[target-nums[i]];
        b[1]=i;
        return b;
      }
      a[nums[i]]=i;
    }
    return b;
  }
};
