class Solution {
public:

int summ(int k){
    int sum = 0;
    while(k>0){
        sum = sum + k%10;
        k=k/10;
    }
    return sum;
}
    int countEven(int num) {
        int count =0 ;
        for(int i=1;i<=num ; i++){
            if(summ(i)%2 == 0) count++;
        }
        return count;
    }
};