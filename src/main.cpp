#include <iostream>
#include "VectorUtils.hpp"

#define SIZE 10

using namespace std;

int main(int argc, char* atgv[]) {
  
  int choice;

  // prompt user to choose LoadLibrary
  cout<<"Please choose a platform\n"
        "1. CPU\n"
        "2. OpenCL\n"
        "3. Cuda\n"
        "Choice: ";
  
  cin>>choice;
  
  switch (choice) {
    case 2:
      VectorUtils::selectedPlatform = VectorUtils::OPENCL;
      break;
    case 3:
      VectorUtils::selectedPlatform = VectorUtils::CUDA;
      break;
    default:
      VectorUtils::selectedPlatform = VectorUtils::CPU;
      break;
  }
    
  float *a = VectorUtils::initVector(SIZE);
  float *b = VectorUtils::initVector(SIZE);
  
  float *c = VectorUtils::add(a, b, SIZE);
  
  for(int i=0; i<SIZE; i++)
    cout<<a[i]<<" + "<<b[i]<<" = "<<c[i]<<"\n";
  
  return 0;
}