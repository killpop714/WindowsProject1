#include "GameObject.h"

Lee::GameObject::GameObject()
{
}
Lee::GameObject::~GameObject()
{
}
void Lee::GameObject::Update()
{

	
	if (GetAsyncKeyState('W') & 0x8000)
	{
		mY -= 0.1f;
	}

	if (GetAsyncKeyState('S') & 0x8000)
	{
		mY += 0.1f;
	}
	if (GetAsyncKeyState('D') & 0x8000)
	{
		mX += 0.1f;
	}

	if (GetAsyncKeyState('A') & 0x8000)
	{
		mX -= 0.1f;
	}
}

void Lee::GameObject::Render(HDC lhdc)
{

	PAINTSTRUCT ps;
	HBRUSH gbrush = (HBRUSH)CreateSolidBrush(RGB(155, 155, 30));
	HBRUSH oldbrush = (HBRUSH)SelectObject(lhdc, gbrush);
	Rectangle(lhdc, 100 + mX, 100+mY, 200 + mX, 200+mY);
}