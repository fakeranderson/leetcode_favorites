#include <algorithm>


/*
C++'s algorithm library is awesome! 4ms exec time on leetcode.
Ok so 'remove' doesn't actually remove the elements, but it does 
move the elements to be deleted to the end of the vector, 
and returns an iterator that points to the location of the 
first of those repeats. 
So the return statement is that iterator minus the iterator at 
the beginning. 
An iterator isn't an int, but an iterator minus an iterator is; 
the current location minus the beginning returns the number of 
values that we don't want deleted.
*/


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {       
        
        return remove(nums.begin(), nums.end(), val) - nums.begin();
        
    }
};
