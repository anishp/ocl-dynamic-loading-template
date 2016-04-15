#include "VectorUtils.hpp"
#include <random>

float* VectorUtils::initVector(int N) {
  
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_real_distribution<float> dist(1, 500);
  
  float* vec = new float[N];
  for(int i=0; i<N; i++)
    vec[i] = dist(gen);
  return vec;
}

float* VectorUtils::add(float* a, float*b, int N) {
  float* c = new float[N];
  for(int i=0; i<N; i++ )
    c[i] = a[i] + b[i];
  return c;
}