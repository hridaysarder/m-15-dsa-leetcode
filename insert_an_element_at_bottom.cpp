#include <bits/stdc++.h> 
stack<int> pushAtBottom(stack<int>& mySt, int x) 
{
    stack<int> newSt;
    while(!mySt.empty())
    {
        newSt.push(mySt.top());
        mySt.pop();
    }
    newSt.push(x);
    while(!newSt.empty())
    {
        mySt.push(newSt.top());
        newSt.pop();
    }
    return mySt;
}
