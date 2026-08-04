class Solution {
public:
    int reverse(int x) {
        int num,remainder;
        long long int reversed_num=0;
        num=x;
    while(num!=0){
remainder = num % 10;
reversed_num = reversed_num * 10 + remainder;
num /= 10;}
   int maxrange,minrange;
   maxrange=(pow(2,31) - 1);
   minrange=-(pow(2,31));
   if(reversed_num>maxrange || reversed_num<minrange){
    return 0;
   }
   else{
    return reversed_num;
   }


        
    }
    
};