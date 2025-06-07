class Solution {

  
public:
    int climbStairs(int n) {
int first = 0;
int second = 1;
int i = 2;
while(i<=n+1){ //2 3 4 5 6
   int temp = first + second; // 1 2 3 5 8
    first = second;// 1 1 2 3 5
    second = temp; // 1 2 3 5 8
        i++;
}
return second;
    

    }
};