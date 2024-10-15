#include "LeeApplication.h"

namespace Lee
{
	void Application::Initalize(HWND hwnd)
	{
		lhwnd = hwnd;
		lhdc = GetDC(hwnd);
	}
	void Application::Run()
	{
		Update();
		LateUpdate();
		Render();
	}
	void Application::Update()
	{
	}
	void Application::LateUpdate()
	{
	}
	void Application::Render()
	{
		Rectangle(lhdc, 500, 500, 600, 600);
	}
}