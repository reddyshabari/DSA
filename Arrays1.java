package Arrays;

public class Arrays1 {
    public static void main(String[] args){
    vector<int> sortedSquares(vector<int>& nums) {
      
      
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=(nums[i]*nums[i]);
        }
          sort(nums.begin(),nums.end());
        return nums;
        
    }
}
}
