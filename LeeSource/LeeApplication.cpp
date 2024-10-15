#include "LeeApplication.h"

namespace Lee
{
	Application::Application()
		:lhwnd(nullptr)
		, lhdc(nullptr)
		, mSpeed(0)
	{

	}

	Application::~Application()
	{
	}
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
		
		mSpeed += 0.1;
	}
	void Application::LateUpdate()
	{
	}
	void Application::Render()
	{
		PAINTSTRUCT ps;
		HBRUSH gbrush = (HBRUSH)CreateSolidBrush(RGB(155, 155, 30));
		HBRUSH oldbrush = (HBRUSH)SelectObject(lhdc, gbrush);
		Rectangle(lhdc, 100, 100, 200, 200);
		
	}
}