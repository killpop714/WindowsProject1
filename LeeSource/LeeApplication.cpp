#include "LeeApplication.h"

namespace Lee
{
	Application::Application()
		:lhwnd(nullptr)
		, lhdc(nullptr)
		, mSpeed(0)
		,mX(0.0f)
		,mY(0.0f)
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
		
		mSpeed += 0.01;
		if (GetAsyncKeyState(VK_UP) & 0x8000)
		{
			mY += 0.1f;
		}

		if (GetAsyncKeyState(VK_DOWN) & 0x8000)
		{
			mY -= 0.1f;
		}
		if (GetAsyncKeyState(VK_LEFT) & 0x8000)
		{
			mX -= 0.1f;
		}

		if (GetAsyncKeyState(VK_RIGHT) & 0x8000)
		{
			mX += 0.1f;
		}
	}
	void Application::LateUpdate()
	{
	}
	void Application::Render()
	{
		PAINTSTRUCT ps;
		HBRUSH gbrush = (HBRUSH)CreateSolidBrush(RGB(155, 155, 30));
		HBRUSH oldbrush = (HBRUSH)SelectObject(lhdc, gbrush);
		Rectangle(lhdc, 100+ mX, 100, 200+mY, 200);
		
	}
}