class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
//         if(prices.size()==1){
//             return 0;
//         }
//       int buyindex;
//       int buyvalue;
//       int lowest=prices[0];
//       for(int i=0;i<prices.size()-1;i++){
//         lowest=min(lowest,prices[i]);
//         }
//       buyvalue=lowest;
//       auto it=find(prices.begin(),prices.end(),lowest);
//       buyindex=it-prices.begin();
      

//       int sellprice;
//       int maximum=prices[buyindex+1];
//       for(int i=buyindex+1;i<prices.size();i++){
//         maximum=max(maximum,prices[i]);
        

//       }

//     if(maximum-buyvalue>0){
//         return maximum-buyvalue;
//     }
//     else{
//         return 0;
//     }
// }
// };
int minimum=prices[0];
int profit=0;
for(int i=1;i<prices.size();i++){
    int cost=prices[i]-minimum;
    profit=max(profit,cost);
    
    minimum=min(minimum,prices[i]);
    
    

}
return profit;
    }};