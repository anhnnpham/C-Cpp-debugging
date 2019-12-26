// Goal: pracitce constructing vectors
// and their iterators
// Call the vector vFloat
// Call the iterator it


#include "main.hpp"

int main ()
{
  vector<int> vInts; 
  vInts.assign(10, 5);
  printVector(vInts);
  cout << '\n' << vInts.size();
  assignFunction(vInts, 1);
  cout << '\n' << vInts.size();
  pushBackFunction(vInts, 2);
  
  emplaceFunction(vInts,1, 3);

  return 0;
}

