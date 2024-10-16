#include "LeeApplication.h"

namespace Lee
{
	Application::Application()
		:lhwnd(nullptr)
		, lhdc(nullptr)
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
		
		mplayer.Update();
	}
	void Application::LateUpdate()
	{
	}
	void Application::Render()
	{
		mplayer.Render(lhdc);
		
	}
}