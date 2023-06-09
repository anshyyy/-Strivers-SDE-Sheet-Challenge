
/*
The solution requires the use of tracking 3 positions, the Low, Mid and High.

We assume that the mid is the "Unknown" area that we must evaluate.

If we encounter a 0, we know that it will be on the low end of the array, and if we encounter a 2, we know it will be on the high end of the array.

To achieve this in one pass without preprocessing (counting), we simply traverse the unknown will generating the low and high ends.

Take this example:

Assume our input is: 1 0 2 2 1 0 (short for simplicity).

Running the algorithm by hand would look something like:

    1 0 2 2 1 0
    ^         ^
    L         H
    M

    Mid != 0 || 2
    Mid++

    1 0 2 2 1 0
    ^ ^       ^
    L M       H

    Mid == 0
    Swap Low and Mid
    Mid++
    Low++

    0 1 2 2 1 0
      ^ ^     ^
      L M     H

    Mid == 2
    Swap High and Mid
    High--

    0 1 0 2 1 2
      ^ ^   ^
      L M   H

    Mid == 0
    Swap Low and Mid
    Mid++
    Low++

    0 0 1 2 1 2
        ^ ^ ^
        L M H

    Mid == 2
    Swap High and Mid
    High--

    0 0 1 1 2 2
        ^ ^
        L M
          H

    Mid <= High is our exit case
*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int low = 0,mid=0,high = n-1;
   while(mid<=high){
       switch(arr[mid]){
          case 0 : swap(arr[low++],arr[mid++]);break;
          case 1 : mid++;break;
          case 2 : swap(arr[mid],arr[high--]);break;
       }
   }
}