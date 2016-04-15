#include <iostream>
#include "VectorUtils.hpp"

#define SIZE 10

int main(int argc, char* atgv[]) {
    
  float *a = VectorUtils::initVector(SIZE);
  float *b = VectorUtils::initVector(SIZE);
  
  float *c = VectorUtils::add(a, b, SIZE);
  
  for(int i=0; i<SIZE; i++)
    std::cout<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<"\n";
  
  return 0;
}