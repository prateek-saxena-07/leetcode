class Solution {
public:
   bool isLongPressedName(string name, string typed) {
   
    if(name.size()>typed.size())return false;
    int  i=0;
    int j=0;
    while(j<typed.size())
    {
        if(i<name.size() && name.at(i)==typed.at(j))
        {
            i++;
        }
        else if(j ==0 || typed.at(j)!=typed.at(j-1))
        {
            return false;
        }
        j++;
    }

    return i==name.size();
   
   }
//         unordered_map<char,int> n;
//         unordered_map<char,int>t;
//         if(name.size()>t)

//         for(auto &ch :name)
//         {
//             n[ch]++;
//             // cout<<n[ch];
//         }
//         for(auto &c :typed)
//         {
//             t[c]++;
           
//         }
//         unordered_map<char,int> ::iterator it=t.begin();
//         unordered_map<char,int> ::iterator itt=n.begin();
//         if(n.size()!=t.size())
//         {
//             return false;
//         }
//              while (it != t.end()) {

//                 if(it->first!=itt->first)
//                 {
//                     return false;
//                 }
//         if(it->second<itt->second)
//             {cout << "Key: " << it->first
//              << ", Value: " << it->second << endl;
//              cout << "Key: " << itt->first
//              << ", Value: " << itt->second << endl;
//                 return false;}

//         ++it;
//         ++itt;
//     };
// return true;
//     }
};