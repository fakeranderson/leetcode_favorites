
using namespace std;
int main()
{
/*
  this checks the length of the final word in a given string with
  only spaces and letters.
  the loop starts at the end of the string and works backwords.
  the i index stops when it finds a letter.
  the j index starts where i is and decrements until it finds another space.
  the int 'alpha' is a boolean that changes when a space is found.
  and breaks the loop, and the length is returned.
*/
  string s = "Hello World  ";
  int length = 0;

  //loop to iterate through entire string s
  for (int i = s.length() - 1; i >= 0; i--)
  {
    //if the current index is a letter
    if (isalpha(s[i]))
    {
      int j = i;
      int alpha = 1;
      while (alpha && j >= 0)
      {
        
        if (isalpha(s[j]))
        {
          length++;
          j--;
        }
        else alpha = 0;
      } return length;
    }
  }
     return 0;   

}
