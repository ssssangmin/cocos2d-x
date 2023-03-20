#include "PlantsVSZombies.h"

USING_NS_CC;
using namespace ui;

Scene* PlantsVSZombies::createScene()
{
	return PlantsVSZombies::create();
}

bool PlantsVSZombies::init()
{
	if (!Scene::init())
	{
		return false;
	}

	auto wlayer = LayerColor::create(Color4B::WHITE);
	this->addChild(wlayer);
	
	auto background = Sprite::create("Background/Day_Unsodded.png");
	background->setAnchorPoint(Vec2(0, 0));
	background->setPosition(Vec2(0, 0));
	background->setLocalZOrder(0);
	background->setContentSize(Size(1400, 600));
	wlayer->addChild(background);
	
	createLawnMower();

	return true;
}

void PlantsVSZombies::createLawnMower()
{
	auto posY = 490;
	for (int i = 0; i < 5; i++)
	{
		posY -= 100;
		auto LawnMower = Sprite::create("PlantsVSZombies/LawnMower.png");
		LawnMower->setAnchorPoint(Vec2(0, 0));
		LawnMower->setPosition(Vec2(150, posY));
		LawnMower->setLocalZOrder(100);
		LawnMower->setScale(0.8);
		this->addChild(LawnMower);
	}
}

void PlantsVSZombies::onEnter()
{
	Scene::onEnter();
	listener =
		EventListenerTouchAllAtOnce::create();

	listener->onTouchesBegan =
		CC_CALLBACK_2(PlantsVSZombies::onTouchBegan,
			this);

	listener->onTouchesMoved =
		CC_CALLBACK_2(PlantsVSZombies::onTouchMoved,
			this);

	listener->onTouchesEnded =
		CC_CALLBACK_2(PlantsVSZombies::onTouchEnded,
			this);

	listener->onTouchesCancelled =
		CC_CALLBACK_2(PlantsVSZombies::onTouchCancelled,
			this);

	_eventDispatcher->
		addEventListenerWithSceneGraphPriority
		(listener, this);
}

void PlantsVSZombies::onExit()
{
	_eventDispatcher->removeEventListener(listener);

	Scene::onExit();
}

void PlantsVSZombies::onTouchBegan(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event)
{

}

void PlantsVSZombies::onTouchMoved(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event)
{
}

void PlantsVSZombies::onTouchEnded(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event)
{
}

void PlantsVSZombies::onTouchCancelled(const std::vector<cocos2d::Touch*>& touches, cocos2d::Event* event)
{
}
