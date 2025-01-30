/* Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element.

Examples:

Input: arr[] = [12, 35, 1, 10, 34, 1]
Output: 34
Explanation: The largest element of the array is 35 and the second largest element is 34. 
Input: arr[] = [10, 5, 10]
Output: 5 
Explanation: The largest element of the array is 10 and the second largest element is 5.
Input: arr[] = [10, 10, 10]
Output: -1
Explanation: The largest element of the array is 10 and the second largest element does not exist.
Constraints:
2 ≤ arr.size() ≤ 105
1 ≤ arr[i] ≤ 105

*/







class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
if(arr.size()<2){
return -1;
}

int firstlargest = INT_MIN;
int secondlargest=INT_MIN;

for(int num:arr){
    if(num>firstlargest){
        secondlargest=firstlargest;
        firstlargest=num;
    }
    else if (num> secondlargest && num < firstlargest){
        secondlargest=num;
    }
}
return(secondlargest == INT_MIN)?-1:secondlargest;
    }
    
}; 


/* Explanation:
Calculating array size first and checking for if array size less than 2  
Create 2 variables firstlargest and secondlargest
then for loop checking for the largest number in the array if there is any number greater than largest the second largest and largest is being updated.
Same in case for checking the second largest the number shouldnot be greater than first and also should be less than first and greater than current second to be get updated
*/
