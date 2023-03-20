#pragma once
#include "cocos2d.h"

#if (CC_TARGET_PLATFORM == CC_PLATFORM_WIN32)
#pragma execution_character_set("utf-8");
#endif

class PlantsVSZombies : public cocos2d::Scene
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	CREATE_FUNC(PlantsVSZombies);

	cocos2d::Sprite* sprite1;
	cocos2d::Sprite* sprite2;
	cocos2d::Sprite* sprite3;
	cocos2d::EventListenerTouchAllAtOnce* listener;

	void createLawnMower();
	void onEnter();
	void onExit();

	// ��ġ�� ������ �� �߻��ϴ� �̺�Ʈ
	void onTouchBegan
	(const std::vector<cocos2d::Touch*>& touches,
		cocos2d::Event* event);
	// ��ġ�� �̵��� �� �߻��ϴ� �̺�Ʈ
	void onTouchMoved
	(const std::vector<cocos2d::Touch*>& touches,
		cocos2d::Event* event);
	// ��ġ�� ������ �߻��ϴ� �̺�Ʈ
	void onTouchEnded
	(const std::vector<cocos2d::Touch*>& touches,
		cocos2d::Event* event);
	// ��ġ�� ��ҵǾ��� �� �߻��ϴ� �̺�Ʈ
	void onTouchCancelled
	(const std::vector<cocos2d::Touch*>& touches,
		cocos2d::Event* event);

};