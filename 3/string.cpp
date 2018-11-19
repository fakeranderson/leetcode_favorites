#define _GLIBCXX_USE_CXX11_ABI 0

#include <iostream>
#include <algorithm>
#include <unordered_set>
#include <string>
#include <ostream>

using namespace std;

int main()
{
string s = "pwwkew";

  //this algorithm adds unique chars to a set in the order that they appear in the string
  //after each for loop, the maximum number between maxLen and the size of the set is recorded
  //when a duplicate letter is found, all of the letters up until and including the last
  //occurence of that letter are erased, so the remaining letters are only the uniques in the current 'substring'
//  unordered_set<char> seen;
  int maxLen = 0;
string seen = "";
for (unsigned int end = 0; end < s.size(); end++)
  {   
    //if the find iterator is at the end, then this means
    //that the element is not in the vector
    if (find(seen.begin(), seen.end(), s[end]) != seen.end())
    {
      //if the element is at the beginning
      if (find(seen.begin(), seen.end(), s[end]) == seen.begin())
      {
        //erase the first element
        seen.erase(seen.begin());
      }
      else {
        //else erase all the elements from the begining until the char
        seen.erase(seen.begin(), find(seen.begin(), seen.end(), s[end+1]));
      }
      
    }seen.push_back(s[end]);
    for (auto iter = seen.begin(); iter != seen.end(); ++iter)
    {
      cout << *iter << " ";
    } cout << endl;
    maxLen = max(maxLen, (int)seen.size());
  }
return 0;
}
/*
  for (unsigned int end = 0; end < s.size(); end++)
  {   
    if (seen.insert(s[end]).second == false)
    {
      if (seen.begin() == seen.find(s[end]))
      {
        seen.erase(seen.begin());
      }
      else {
        seen.erase(seen.begin(), seen.find(s[end+1]));
      }
      seen.insert(s[end]);
    }
for(auto iter=seen.begin(); iter!=seen.end();++iter)
{

cout << *iter << " ";

} cout << endl;


    maxLen = max(maxLen, (int)seen.size());
  } 
  cout << maxLen << endl;

  return 0;
}
*/
