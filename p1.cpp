#include <bits/stdc++.h>
using namespace std;


vector<int> right(vector<int> &arr)
{
    stack<int> st;
    vector<int> result(arr.size());

    for (int i = arr.size() - 1; i >= 0; i--)
    {
        while (!st.empty() && st.top() >= arr[i])
        {
            st.pop();
        }
        if (st.empty())
        {
            result[i] = -1;
        }
        else
        {
            result[i] = st.top();
        }
        st.push(arr[i]);
    }
    return result;
}

vector<int> left(vector<int> &arr)
{
    stack<int> st;
    vector<int> result;

    for (int i = 0; i < arr.size(); i++)
    {
        while (!st.empty() && st.top() < arr[i])
        {
            st.pop();
        }

        if (st.empty())
        {
            result.push_back(-1);
        }
        else
        {
            result.push_back(st.top());
        }
        st.push(arr[i]);
    }
    return result;
}

bool isValid(string s)
{
    stack<char> st;
    for (auto i : s)
    {
        if (i == '(' or i == '{' or i == '[')
            st.push(i);
        else
        {
            if (st.empty() || (st.top() == '(' && i != ')') || (st.top() == '{' and i != '}') || (st.top() == '[' and i != ']'))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

vector<long long> nextLargerElement(vector<long long> arr, int n)
{
    stack<long long> st;

    st.push(-1);

    vector<long long> res(n);

    for (int i = n - 1; i >= 0; i--)
    {
        long long curr = arr[i];
        while (!st.empty() && st.top() <= curr)
            st.pop();
        if (st.empty())
            res[i] = -1;
        else
            res[i] = st.top();
        st.push(curr);
    }
    return res;
}