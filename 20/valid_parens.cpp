

class Solution {
public:
    bool isValid(string s) {
        
  int N = s.length();
        
  if(s=="") 
    return true;
        
  if(N==1 || N % 2 != 0)       
    return false;
                      
  if(s[0] == '}' || s[0] == ')' || s[0] == ']')
    return false;
        
  string result = recBracket("","",s,0);
        
    for (int i = 0; i < N; i+=2)
  {
      if (result[i] == '{' && result[i+1] != '}')
        return false;
      if (result[i] == '[' && result[i+1] != ']')
        return false;
      if (result[i] == '(' && result[i+1] != ')')
        return false;
  } 
        return true;
}
  string recBracket(string result, string seqOrder, string s, int sIndex)
  {
  //base case if result is same length as input string, its done
  if (sIndex == s.length())
  {
    return result += seqOrder;
  }
    //if current bracket is right, add it and its pair (whatever is at the end of seqorder) to the result
  if (s[sIndex] == '}' || s[sIndex] == ']' || s[sIndex] == ')')
  {
    if (seqOrder.length() > 0)
    {
      result += seqOrder[seqOrder.length() - 1];
      seqOrder.pop_back();
    }
    
    result += s[sIndex];

  }
  //else its left, so add that to the seqOrder, advance the index
    
  else
  {
    seqOrder += s[sIndex];
    
  } 
  sIndex++;
  return recBracket(result, seqOrder, s, sIndex);
}
};
