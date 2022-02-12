#pragma once
#include <string>

namespace Truesight {
	class Error {
	public:
		Error() = default;
		Error(const char* desc)
			: description(desc)
		{
		}
		Error(std::string desc)
			: description(desc.c_str())
		{
		}
		
		std::string str() {
			return std::string("Truesight: " + std::string(description));
		}

		operator bool() const {
			if (strlen(description) > 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	private:
		const char* description = "";
	};
}