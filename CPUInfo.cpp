#include "CPUInfo.h"

#include <cpuid.h>

namespace ff {
	CPUInfo::CPUInfo() {
		__get_cpuid_count(7, 0, &eax, &ebx, &ecx, &edx);
		rdseed = ebx & bit_RDSEED;

		__get_cpuid_count(1, 0, &eax, &ebx, &ecx, &edx);
		rdrand = ecx & bit_RDRND;
	}
}
