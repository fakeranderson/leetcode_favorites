class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    
        
  int N = strs.size();
    
  if (N == 1)
  {
    return strs[0];
  }
  if (N==0)
    return "";

  string result = "";
  
  for (int j = 0; j < strs[0].size(); j++)
  {
    int k = 1;
    
    int streak = 0;
        //while j is less than the size of the first word
        //and while k (the word number) is less than the total number of words 
    while (j < strs[0].size() && k < N)
    {
                //strs[0][j] means the jth char in 0th word, and 
                //strs[k][j] is the jth char in the kth word
        if (strs[0][j] == strs[k][j])
        {
          streak++;
          k++;
        } else return result; //if theres not a match, return whatever was matched so far
                
            
                //if there are three words, and the streak is 2, then that means that 
                //the two words that followed the first had their jth chars match,
                //so we add that char to the result string
        if (streak == N-1)
        {
          result += strs[0][j];
        }
      
    }
  }
    return result;
}
};
