class myStack
{
  //hidden data members and member functions
private:
  int size;
  int *stack;
  int top;
  //return true if stack is full
  bool isFull()
  {
    return size == top - 1;
  }
  bool isEmpty()
  {
    return top == -1;
  }

  //interface of class myStack
  //this is only accessible for user
public:
  //allocate memory for stack
  myStack(int _size = 50)
  {
    size = _size;
    stack = new int[size]; 

    //initially stack is empty
    top = -1;
  }

  //add value to stack
  bool push(int i)
  {
    if (isFull())
      return false;
    else
    {
      top++;
      stack[top] = i;
    }
  }

  int pop()
  {
    if (isEmpty())
      throw new exception("Stack is empty");
      
    else
    {
      return stack[top--];
    }
  }
};