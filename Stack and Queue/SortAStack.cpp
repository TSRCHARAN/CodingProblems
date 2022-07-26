//Sorting a stack


void sortedInsert(stack<int>&st, int num)
{
    if(st.empty() || st.top()<num)
    {
        st.push(num);
        return ;
    }

    int n=st.top();
    st.pop();

    // Recursive call
    sortedInsert(st,num);

    st.push(n);

}
void sort(stack<int>s)
{
    if(s.empty())
        return;

    int num=s.top();
    s.pop();

    // Recursive call
    sort(s);

    sortedInsert(s, num);
}
