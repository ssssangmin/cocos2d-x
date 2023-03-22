#include "CookieRun.h"

USING_NS_CC;

Scene* CookieRun::createScene()
{
	return CookieRun::create();
}

bool CookieRun::init()
{
	if (!Scene::init())
	{
		return false;
	}

	auto wlayer = LayerColor::create(Color4B::WHITE);
	this->addChild(wlayer);

	// ���� ���� ȭ�� ���� (���� ���� ��ư).
	// replaceScene���� ���� ���� ȭ�鿡�� ���ȭ������ �Ѿ��.
	// pushScene���� 1. ��Ű �̹��� ����. 2. �� �̹��� ����. 3. ���� �̹��� ����.
	// 4. �޸��� ��ư. 5. ȯ�漳�� ��ư
	// 4. �޸��� ��ư ������ ��
	// ��潺ũ�� �����鼭 �޸��� ������ �� �Ͻ����� ��ư ����
	// �Ͻ����� ������ ����ϱ�, Ȩ���� ���ư��� �� �� ��ư

	auto S1_StartButton = MenuItemSprite::
}