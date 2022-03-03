// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
  double res = value;
	if (n == 0) return 1;
	if (n == 1) return value;
	res *= pown(value, n - 1);
	return res;
}

uint64_t fact(uint16_t n) {
  uint64_t res = n;
	if (n == 0) return 1;
	res *= fact(n - 1);
	return res;
}

double calcItem(double x, uint16_t n) {
  double res = 0;
	res = pown(x, n) / fact(n);
	return res;
}

double expn(double x, uint16_t count) {
  double e = 0;
	for (uint16_t i = 0; i <= count; i++) {
		e += calcItem(x, i);
	}
	return e;
}

double sinn(double x, uint16_t count) {
  double sinnn = 0;
	for (uint16_t i = 1; i <= count; i++) {
		sinnn += pown(-1, i - 1) * calcItem(x, 2 * i - 1);
	}
	return sinnn;
}

double cosn(double x, uint16_t count) {
  double cosnn = 0;
	for (uint16_t i = 1; i <= count; i++) {
		cosnn += pown(-1, i - 1) * calcItem(x, 2 * i - 2);
	}
	return cosnn;
}
