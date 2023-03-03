#pragma once
#include <iostream>

#ifdef LEAVERLIBRARYDYNAMIC_EXPORTS
#define LEAVERLIBRARYDYNAMIC_API __declspec(dllexport)
#else
#define LEAVERLIBRARYDYNAMIC_API __declspec(dllimport)
#endif
namespace Leaver
{
	class Leaver {
	public:
		LEAVERLIBRARYDYNAMIC_API void leave(std::string name);
	};
}