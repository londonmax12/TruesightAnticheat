#pragma once
#include "../Helpers/Error.h"

namespace Truesight {
	bool initialized = false;
	Error latest_error;

	bool Init() {
		if (initialized)
		{
			latest_error = Error("Already Initialized!");
			return false;
		}

		initialized = true;
		return true;
	}
	Error GetError() {
		return latest_error;
	}
}