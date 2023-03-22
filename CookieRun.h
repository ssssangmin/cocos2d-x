#pragma once
#include "cocos2d.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#pragma execution_character_set("utf-8");
#endif

class CookieRun : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	CREATE_FUNC(CookieRun);

	cocos2d::Sprite* m_BraveCookie;

	cocos2d::Sprite* m_Background1;
	cocos2d::Sprite* m_Background2;

};