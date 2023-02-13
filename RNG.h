#pragma once

#include "CPUInfo.h"

namespace ff {
	class RNG : public CPUInfo {
	  public:
		RNG();

	  public:
		bool has_trng() const;
		unsigned short rand16() const;
		unsigned int rand32() const;
		unsigned long long rand64() const;
	};
}
