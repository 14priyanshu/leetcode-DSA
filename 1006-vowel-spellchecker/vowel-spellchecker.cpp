class Solution {
public:
string Lower(string it)
    {
        string str="";
        for(char &i : it)
            {
                str+=tolower(i);
            }
        return str;
    }
string isvow(string it)
           {    string temp="";
             for(char &i:it)
                { i=tolower(i);
                    if(i=='a'||i=='e'||i=='i'||i=='o'||i=='u')
                        {
                           temp +='*';
                        }
                    else
                      temp+=i;
                }
                return temp;
           }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) 
    {   set<string> s;
        map<string,string> cap;
        map<string,string> vow;
        for(auto &it: wordlist)
            {
               s.insert(it);

              string str=Lower(it);
              if(cap[str]=="")
                 cap[str]=it;

                string temp=isvow(it);
                 
                if(vow[temp]=="")
                  vow[temp]=it;
            }
            vector<string> res;


        for(auto &it:queries)
            {  string str=Lower(it);

                if(s.count(it))
                 res.push_back(it);

                else if(cap[str]!="")
                 res.push_back(cap[str]);

                else if(vow[isvow(it)]!="")
                  res.push_back(vow[isvow(it)]);

                else 
                    res.push_back("");

            }
            return res;
        
    }
};