class Solution {
public:
    int pivotInteger(int n) {
        vector<int>p1(n+3);
        vector<int>p2(n+3);
        p1[0]=1;
        p2[n-1]=n;
        int j=1;
        if(n==1) return 1;
        for(int i=2;i<=n;i++)
        {
            p1[j]=p1[j-1]+i;
            j+=1;
        }
        j=n-2;
        for(int i=n-1;i>=1;i--)
        {
            p2[j]=p2[j+1]+i;
            j-=1;
        }
        for(int i=0;i<=n;i++)
        {
            if(p1[i]==p2[i] and i!=0 and i!=n ) return i+1;
        }
    return -1;
    }
};