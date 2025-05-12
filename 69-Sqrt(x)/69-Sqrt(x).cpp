// Last updated: 5/11/2025, 9:39:11 PM
class Solution {
public:
    int mySqrt(int x) {
        // try nums between 1 to x
        
        // binary search 1...x whose power of 2 is closest to x
        long left = 0;
        long right = long(x) + 1;
        while (left < right) 
        {
            long middle = left + (right - left) /2;

            if (x == middle * middle) return middle;
            else if ( middle * middle < x) left = middle + 1;
            else right = middle;
        }

        return left-1;
    }
};