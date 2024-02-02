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
             //   cout<<z<<" "<<x<<" "<<a<<" ";
              //  sscanf(z, "%d", &low);
                low=0;
                reverse(z.begin(),z.end());
                for(int i=0;i<z.size();i++)
                {
                    low+=(z[i]-'0')*(pow(10,i));
                }
                y=0;
                for(int i=0;i<x;i++)
                {
                     y+= 1*(pow(10,i));
                }
            }
           //cout<<low<<" ";
         //   cout<<y<<" ";
         cout<<y<<" ";
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
         if(h==1) v.push_back(low);
            low+=y;
         //   cout<<low<<" "
        }
        vector<int>di;
        for( auto it:v)
        {
            cout<<it<<" ";
            if(it>=p and it<=high)
            {
             di.push_back(it);
             }
        }
        return di;
    }

};