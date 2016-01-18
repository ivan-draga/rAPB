#include "StdAfx.h"
#include <WinSock2.h>

#include "Utils.h"
#include "detours.h"

#ifndef BASE_H
#define BASE_H

namespace APB
{
	namespace emu
	{
		class Base
		{
		public:
			static Base* GetInstance();
			static Base* gInstance;

			void InitHooks(bool pIsServer);
			DWORD dwCodeSize;
			DWORD dwCodeOffset;
			DWORD dwEntryPoint;

		private:
			Base();
			~Base();
		};
	}
}

#endif
