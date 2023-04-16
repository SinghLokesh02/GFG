//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
         stack<char>st;
        for(int i = 0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='[' ||s[i]=='{' )st.push(s[i]);
            else{
                if(st.empty())return 0;
                char c = st.top();
                st.pop();
                if(s[i]==')'&&c=='(' || s[i]==']'&&c=='[' ||s[i]=='}'&&c=='{' ){
                    continue;
                }
                else{
                    return 0;
                }
            }
        }
        if(st.empty())return 1;
        return 0;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends