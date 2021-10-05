#include<bits/stdc++.h>
using namespace std;
 vector<string >ans;
    void gb(string op,int n, int open,int close,int i )
    {
        if(i==2*n)
        {
            ans.push_back(op);
            return;
        }
        //open
        if(open<n)
            gb(op+'(',n,open+1,close,i+1);
        if(close<open)
            gb(op+')',n,open,close+1,i+1);
    }
    
    vector<string> generateParenthesis(int n) {
        string output="";
        gb(output,n,0,0,0);
        
        return ans;
        
    }
    int main()
    {
    	int n;
    	cin>>n;
    	generateParenthesis(n);
    	for(int i=0;i<ans.size();i++)
    		cout<<ans[i]<<endl;
    }
