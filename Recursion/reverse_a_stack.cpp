class Solution {
  public:
  void insertbottom(stack<int>&s,int temp){
      if(s.size()==0){
          s.push(temp);
          return;
      }
      int val=s.top();
      s.pop();
      insertbottom(s,temp);
      s.push(val);
      return;
  }
    void reverseStack(stack<int> &s) {
        // code here
        if(s.size()==1){
            return;
        }
        int temp=s.top();
        s.pop();
        reverseStack(s);
        insertbottom(s,temp);
        return;
    }
};