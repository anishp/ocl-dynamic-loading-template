#include <iostream>

class VectorUtils {

public:
  enum Platform {CPU, OPENCL, CUDA};
  static Platform selectedPlatform;
  static float* initVector(int N);
  static float* add(float* a, float* b, int N);

private:
  static bool initialized;
  static bool LoadLibrary(Platform platform);
  static void* handle;
};