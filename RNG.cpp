#include "RNG.h"

#include <immintrin.h>

#include <stdexcept>

namespace ff {
	RNG::RNG() : CPUInfo() {
		if (!has_trng())
			throw std::runtime_error("CPU does not have RDSEED and RDRAND!\n");
	}

	bool RNG::has_trng() const {
		return has_rdseed() || has_rdrand();
	}

	unsigned short RNG::rand16() const {
		unsigned short num = 0;
		if (has_rdseed())
			_rdseed16_step(&num);
		else
			_rdrand16_step(&num);

		return num;
	}

	unsigned int RNG::rand32() const {
		unsigned int num = 0;
		if (has_rdseed())
			_rdseed32_step(&num);
		else
			_rdrand32_step(&num);

		return num;
	}

	unsigned long long RNG::rand64() const {
		unsigned long long num = 0;
		if (has_rdseed())
			_rdseed64_step(&num);
		else
			_rdrand64_step(&num);

		return num;
	}
}
