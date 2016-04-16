#include "VectorUtils.hpp"
#include <dlfcn.h>

bool VectorUtils::initialized = false;
void* VectorUtils::handle = NULL;
VectorUtils::Platform VectorUtils::selectedPlatform = CPU;

float* VectorUtils::initVector(int N) {
  
  if(!initialized) {
    LoadLibrary(selectedPlatform);
  }
  
  float* (*initFunc)(int);
  initFunc = (float* (*)(int)) dlsym(handle, "initVector");
  
  float* vec = (*initFunc)(N);
    
  return vec;
}

float* VectorUtils::add(float* a, float*b, int N) {
  float* (*addFunc)(float*, float*, int);
  addFunc = (float* (*)(float*, float*, int)) dlsym(handle, "add");
  
  float* vec = (*addFunc)(a, b, N);
    
  return vec;
}

bool VectorUtils::LoadLibrary(Platform platform) {
  
  switch (selectedPlatform) {
    case CPU:
      handle = dlopen("libVectorCPU.so", RTLD_LAZY);
      break;
    case OPENCL:
      handle = dlopen("libVectorOCL.so", RTLD_LAZY);
      break;
    case CUDA:
      handle = dlopen("libVectorCUDA.so", RTLD_LAZY);
      break;
  }
  
  if(!handle) {
    std::cout<<dlerror();
    return false;
  }
  
  initialized = true;
  return true;
}