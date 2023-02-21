package Arrays;

public class Arrays1 {
    public static void main(String[] args){
    vector<int> sortedSquares(vector<int>& n) {
      
      
        for(int i=0;i<n.size();i++)
        {
            n[i]=(n[i]*n[i]);
        }
          sort(n.begin(),n.end());
        return n;
        
    }
}
}
