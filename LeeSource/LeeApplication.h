#pragma once
#include "Leelib.h"

namespace Lee
{

	class Application
	{
	public:
		void Initalize(HWND hwnd);
		void Run();

		void Update();
		void LateUpdate();
		void Render();

	private:
		HWND lhwnd;
		HDC lhdc;
	};
}


