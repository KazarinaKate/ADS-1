// Copyright 2022 NNTU-CS
bool checkPrime(uint64_t value) {
// вставьте код функции
    if (value > 1) {
        for (int i = 2; i < value; i++) {
			if (value % i == 0) {
				return false;
			}
			return true;
        } else {
            return false;
        }
    }
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
    int p = 0;
	bool a = true;
	for (int i = 2; i < 10000; i++) {
	    a = true;
	    for (int j = 2; j <= (i / 2); j++) {
	        if (i != j) {
	            if (i % j == 0) {
	                a = false;
	            }
	            if (!a) {
	                break;
	            }
	        }
	    }
	    if (a) {
	        p++;
	    }
	    if (p == n) {
	        return i;
	        break;
	    }
	}
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
    bool a = true;
    for (int i = value + 1; i < 10000; i++) {
        a = true;
        for (int j = 2; j <= (i / 2); ++j) {
            if (i != j) {
                if (i % j == 0) {
                    a = false;
                }
                if (!a) {
                    break;
				}
			}
		}
		if (a) {
		    return i;
		}
	}
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
    int sum = 0;
    bool a = true;
    for (int i = 2; i < hbound; i++) {
        a = true;
        for (int j = 2; j <= (i / 2); ++j) {
            if (i != j) {
                if (i % j == 0) {
                    a = false;
				}
				if (!a) {
				    break;
				}
			}
		}
		if (a) {
		    sum = sum + i;
		}
	}
	return sum;
}
