class Solution {
public:
    void recc(vector<int> & d, int pos, int carr)
    {
        d[pos] = d[pos] + carr;
        carr=0;
        if(d[pos]>9)
        {
            d[pos]  = d[pos] -10;
            carr =1;
        }
        if(pos-1==-1 && carr==0)
            return;
        else if( pos-1==-1 && carr !=0)
        {
            d.push_back(carr);
            reverse(d.begin(),d.end());
            return;
        }
        recc(d,pos-1,carr);
        
    }
    vector<int> plusOne(vector<int>& digits) {
        recc(digits,digits.size()-1,1);
        return digits;
    }
};