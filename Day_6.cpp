/*Question 1
Write a function to find the maximum element in the stack.*/

class STACK
{
  stack<int> main;
  stack<int> maximum;
  
  public:
    void push(int num)
    {
      main.push(num);
      if(main.size() == 1)
      {
        maximum.push(num);
        return;
      }
      if(num > maxinum.top())
        maximum.push(num);
    }
    int getMax()
    {
      return maximum.top();
    }
}

/*Question 2
Write a function to find the minimum element in the stack.*/

class STACK
{
  stack<int> main;
  stack<int> minimum;
  
  public:
    void push(int num)
    {
      main.push(num);
      if(main.size() == 1)
      {
        minimum.push(num);
        return;
      }
      if(num < mininum.top())
        minimum.push(num);
    }
    int getMin()
    {
      return minimum.top();
    }
}
