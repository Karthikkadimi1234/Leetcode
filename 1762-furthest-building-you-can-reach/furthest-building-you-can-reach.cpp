class Solution {
public:
    int furthestBuilding(vector<int>& h, int b, int l) {
        int i,s=0;
        priority_queue<int>pq;
        for(i=0;i<h.size()-1;i++)
        {   
            if(h[i]<=h[i+1]) 
            {
                int k=abs(h[i]-h[i+1]);
                s+=k;
                pq.push(k);
                if(s>b)
                {
                    if(l==0)
                    {
                        return i;
                    }
                    else
                    {  
                    l=l-1;
                    s=s-pq.top();
                    pq.pop();
                    }
                }
            }
        }
        return h.size()-1;
    }
};