// Reverse Words in a String

//With front and back spaces

string reverseWords(string s)
{
        stack<string>st;
        int i;
        string str="";

        s+=" ";
        for(i=0;s[i];i++)
        {
            if(s[i]==' ')
            {
                st.push(str);
                str="";
            }
            else
            {
                str+=s[i];
            }
        }

        string ans=st.top();
        st.pop();
        while(!st.empty())
        {
            ans+=" "+st.top();
            st.pop();
        }

        return ans;
}
