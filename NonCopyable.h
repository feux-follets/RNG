#pragma once

namespace ff {
	class NonCopyable {
	  public:
		NonCopyable() = default;
		virtual ~NonCopyable() = default;
		NonCopyable(const NonCopyable&) = delete;
		NonCopyable(NonCopyable&&) = delete;
		NonCopyable& operator=(const NonCopyable&) = delete;
		NonCopyable& operator=(NonCopyable&&) = delete;
	};
}

