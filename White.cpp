#include "stdafx.h"

White::White()
{
}

White::~White()
{
}

void White::onMenu()
{
}

void White::onProcessSpell(SpellData* spelldata, SpellCastInfo* spellcastinfo)
{
}

void White::ClickRightMouseButton()
{
	auto cursorpos = *Game::Cursor()->GetPosition();

	POINT CurPos;
	GetCursorPos(&CurPos);
	int X = CurPos.x;
	int Y = CurPos.y;
	mouse_event(MOUSEEVENTF_RIGHTDOWN, X, Y, 0, 0);
	Sleep(10);
	mouse_event(MOUSEEVENTF_RIGHTUP, X, Y, 0, 0);
}
