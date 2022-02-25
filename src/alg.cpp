// Copyright 2022 NNTU-CS
bool checkPrime(uint64_t value) {
// вставьте код функции
    int z = value;
	if (z > 1) {
		for (int i = 2; i < z; i++)
			if (z % i == 0) {
				return false;
			}
			return true;
	} else {
		return false;
	}
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    int p = 0;
	int N = n;
	int i = 2;
	for (i; ; i++){
		if (checkPrime(i)) {
			p++;
		}
		if (p == N) {
			break;
		}
	}
	return i;
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    int z = value;
	int i = 2;
	for (i; ; i++) {
		if (checkPrime(i)) {
			if (i > z) {
				return i;
			}
		}
	}
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    int z = hbound;
	int sum = 0;
	int i = 2;
	for (i; i < z; i++) {
		if (checkPrime(i)) {
			sum = sum + i;
		}
	}
	return sum;
}
