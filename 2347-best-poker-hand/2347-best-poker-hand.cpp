#include <unordered_map>
class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
          unordered_map<int, int> umap;
        char checker=suits[0];
        bool check=true;
        for(int i=1;i<suits.size();i++){
            if(suits[i]!=checker){
                check=false;
                break;
            }
        }
        if(check==true){
            return "Flush";
        }
        for(int i=0;i<ranks.size();i++){
            umap[ranks[i]]++;
        }
         unordered_map<int,int>:: iterator itr;
   
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        if(itr->second>=3){
            return "Three of a Kind";
            break;
        }
     }
     for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        if(itr->second==2){
            return "Pair";
            break;
        }
     }
        return "High Card";
        
    }
};