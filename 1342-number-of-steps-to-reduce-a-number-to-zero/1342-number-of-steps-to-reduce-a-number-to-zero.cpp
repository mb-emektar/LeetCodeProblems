class Solution {
public:
    int numberOfSteps(int num) {
        int count =0;
        while(num>0){
            count++;
            if(num == 1) break;
            else if(num%2==1) num=num-1;
            else if(num%2==0) num=num/2;
            
        }
        
        return count;

    }
    
    
    
    
};