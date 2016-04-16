#include "VectorUtils.hpp"
#include <dlfcn.h>

float* VectorUtils::initVector(int N) {
  
  void* handle = dlopen("platforms/cpu/libVectorCPU.so", RTLD_LAZY);
  
  if(!handle) {
    std::cout<<dlerror();
  }
  
  float* (*initFunc)(int);
  initFunc = (float* (*)(int)) dlsym(handle, "initVector");
  
  float* vec = (*initFunc)(N);
  
  dlclose(handle);
  
  return vec;
}

float* VectorUtils::add(float* a, float*b, int N) {
  float* c = new float[N];
  for(int i=0; i<N; i++ )
    c[i] = a[i] + b[i];
  return c;
}