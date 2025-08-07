class Solution {
public:
    void sortedOrder(stack<int> &s, int element) {
        if(s.empty() || s.top()<element) {
            s.push(element);
            return;
        }
        int top=s.top();
        s.pop();
        sortedOrder(s,element);
        s.push(top);
    }

    void sortStack(stack<int> &st) {
        // Your code goes here
    if(st.empty()) return;

    int top=st.top();
    st.pop();

    sortStack(st);

    sortedOrder(st,top);
    
    }
};