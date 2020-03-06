#pragma once
class White final : public pComponent
{
public :
	White();
	virtual ~White();
	
	
	virtual void onMenu();
	virtual void onProcessSpell(SpellData* spelldata, SpellCastInfo* spellcastinfo);

	void ClickRightMouseButton();

	void onStart() override
	{
		auto local = ObjectManager::GetPlayer();
		string* a = &local->GetName();
		ENGINE_MSG(a->c_str());
	}
	
	void onUpdate() override
	{
		if (GetAsyncKeyState(VK_KEYBOARD_V))
		{
			ClickRightMouseButton();
		}
	}

	void onRender() override
	{
		auto local = ObjectManager::GetPlayer();
		int pcolor = 0xFF0000;
		//lol::r3dDrawCircle.Call(&local->GetPosition(), 100,& pcolor, 0, 0, 0, 1);
	}
};

