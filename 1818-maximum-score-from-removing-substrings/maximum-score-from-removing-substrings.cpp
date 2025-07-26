class Solution {
//    / int empty(stack<char>& st,int x,int res,char f, char se,string& s)
//         {
//             while(!st.empty())
//                 {
//                     char temp=st.top();
//                      st.pop();
//                     if(!st.empty()&&st.top()==f&&temp==se)
//                       {res+=x;st.pop();}
                    
//                 }
//                 return res;
//         }
   int filling(stack<char>& st,int x,int res,char f,char se,string& s)
    {  int size=s.size();
           for(int i=0;i<size;i++)
           {
             if(!st.empty()&&st.top()==f&&s[i]==se)
              { res+=x;st.pop();}
             else 
              st.push(s[i]);
           }
           s="";
        while(!st.empty())
            {
              s+=st.top();
              st.pop();
            }
            reverse(s.begin(),s.end());
            return res;
    }
public:
    int maximumGain(string s, int x, int y) 
    {
        int size=s.size();
        stack<char> st;
        int res=0;
        if(x>y)
         {res=filling(st,x,res,'a','b',s);
           res=filling(st,y,res,'b','a',s);}
        else
            {
                res=filling(st,y,res,'b','a',s);
                res=filling(st,x,res,'a','b',s);
            }
            return res;

        
        
    }
};