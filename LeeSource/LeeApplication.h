#pragma once
#include "GameObject.h"
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

		//플레이어 정보
		GameObject mplayer;
	};
}


