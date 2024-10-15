#pragma once
#include "Leelib.h"

namespace Lee
{

	class Application
	{
	public:
		Application();
		~Application();

		void Initalize(HWND hwnd);
		void Run();

		void Update();
		void LateUpdate();
		void Render();

	private:
		HWND lhwnd;
		HDC lhdc;

		float mSpeed;
		float mX;
		float mY;
	};
}


