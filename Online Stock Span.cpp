class StockSpanner {
public:
    stack<pair<int,int>> st;
    int ind;

    StockSpanner() {
        ind = -1;
    }

    int next(int price) {
        ind = ind + 1;
        int ans;

        // Pop elements from the stack while the top element's price is less than or equal to the current price
        while (!st.empty() && st.top().first <= price) {
            st.pop();
        }

        // Calculate the answer
        ans = ind - (st.empty() ? -1 : st.top().second);

        // Push the current price and index onto the stack
        st.push({price, ind});

        return ans;
    }
};
