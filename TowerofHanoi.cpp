
#include <iostream>

//O(2 to the n)
void TOH(int n,int A,int B,int C)
{
  if(n>0)
  {
    TOH(n-1,A,C,B);
    std::cout<<"from "<<A<<" to "<<C<<std::endl;
    TOH(n-1,B,A,C);
  }
}


int main()
{
  TOH(5,1,2,3);
  return 0;
}
