class Solution
{
public:
    void insertButtom(stack<int> &st, int tp)
    {

        if (st.empty())
        {
            st.push(tp);
            return;
        }

        int curTp = st.top();
        st.pop();
        insertButtom(st, tp);
        st.push(curTp);
    }
    void reverseStack(stack<int> &st)
    {
        // code here
        if (st.empty())
            return;
        int tp = st.top();
        st.pop();
        reverseStack(st);
        insertButtom(st, tp);
    }
};
//https://www.geeksforgeeks.org/problems/reverse-a-stack/1