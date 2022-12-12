class Solution {
public:
    
    int climbStairs(int n) {
        // Vector to keep track of ways to climb the stairs
        std::vector<int> stairs(n +1);
        
        // Default values of the first 2 element
        stairs[0] = 1;
        stairs[1] = 1;
        
        // Iterating through the number of stairs
        for(int i = 2; i <= n; i++){
            // Computing ways of climbing i number of stairs with help from i - 1 and i - 2 number of stairs.
            stairs[i] = stairs[i - 1] + stairs[i-2];
        }
        
        // Return the answer in the nth index - that is the solution. 
        return stairs[n];
    }
};
