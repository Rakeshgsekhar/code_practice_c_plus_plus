#include<bits/stdc++.h>
using namespace std;
 
 
int llap(int n, vector<int> &a)
{
    if(n<=2)
        return n;
 
    int i,j,k;
    int mxl=2;
 
    vector<vector<int> > dp(n,vector<int>(n));
    //dp[i][j]=length of the longest AP with first element a[i] and second element a[j]
 
    //initialization
    //if second term is the last term of array, length is always 2 
    for(i=0;i<n;i++)
        dp[i][n-1]=2;
 
    //j is the second element of the AP
    for(j=n-2;j>=1;j--)
    {
        //i is the first element of the AP
        i=j-1;
        k=j+1;
 
        while(i>=0 && k<n)
        {
            if(a[i]+a[k]==2*a[j])
            {
                //i, j, k are in AP
                dp[i][j]=dp[j][k]+1;
 
                if(mxl<dp[i][j])
                    mxl=dp[i][j];
 
                i--;
                k++;
            }
 
            else if(a[i]+a[k]<2*a[j])
            {
                k++;
            }
 
            else
            {
                dp[i][j]=2;
                i--;
            }
        }
 
        //initialize every remaining value of i for this j
        while(i>=0)
        {
            dp[i][j]=2;
            i--;
        }
 
 
    }
 
 
    return mxl;
}
 
int main()
{
    int n;
    int i;
 
    cout<<"Enter the number of elements in the array  ";
    cin>>n;
 
    vector<int> a(n);
 
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
 
    cout<<"The length of the longest arithmetic progression in the given sorted sequence is ";
    cout<<llap(n,a);
 
    cout<<endl;
    return 0;
}