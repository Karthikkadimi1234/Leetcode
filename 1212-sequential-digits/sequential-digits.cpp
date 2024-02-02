class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
       string s="123456789";
       string z;
       int x=0,y=0;
       int p=low;
       vector<int>v;
        while(low<=high)
        {
            string k=to_string(low);
            int a=k.size();
            if(a>x)
            {
                z="";
                x=k.size();
                for(int i=0;i<x;i++)
                {
                    z+=s[i];
                }
                low=stoi(z);
                y=0;
                for(int i=0;i<x;i++)
                {
                     y+= 1*(pow(10,i));
                }
            }
         string d=to_string(low);
         int h=1;
         for(int i=0;i<d.size();i++)
         {
             if(d[i]=='0')
             {
                h=0;
                break;
             }
         }
         if(h==1){
            if(low>=p and low<=high) v.push_back(low);
         }
            low+=y;
        }
        return v;
    }

};