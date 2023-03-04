// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  long double stepen = 1;
  for (size_t i = 1; i <= n; i++) {
    stepen = stepen * value;
  }
  return stepen;
}

uint64_t fact(uint16_t n) {
  long long int fact = 1;
  for (size_t i = 1; i <= n; i++) {
    fact = i * fact;
  }
  return fact;
}

double calcItem(double x, uint16_t n) {
  return (pown(x, n) / fact(n));
}

double expn(double x, uint16_t count) {
  double expn = 1;
  for (size_t i = 1; i <= count; i++) {
    expn = expn + calcItem(x, i);
  }
  return expn;
}

double sinn(double x, uint16_t count) {
  double sinf = 0;
  for (size_t i = 1; i <= count; i++) {
    sinf = sinf + (pown(-1, i - 1) * pown(x, (2 * i) - 1) / fact((2 * i) - 1));
  }
  return sinf;
}

double cosn(double x, uint16_t count) {
  double cosf = 0;
  for (size_t i = 1; i <= count; i++) {
    cosf = cosf + (pown(-1, i - 1) * pown(x, (2 * i) - 2) / fact((2 * i) - 2));
  }
  return cosf;
}
