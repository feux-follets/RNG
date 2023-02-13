#pragma once

#include "NonCopyable.h"

namespace ff {
	class CPUInfo : NonCopyable {
	  public:
		CPUInfo();

	  public:
		bool has_rdseed() const { return rdseed; }
		bool has_rdrand() const { return rdrand; }

	  private:
		unsigned int eax{0};
		unsigned int ebx{0};
		unsigned int ecx{0};
		unsigned int edx{0};

		bool rdseed{false};
		bool rdrand{false};
	};
}
