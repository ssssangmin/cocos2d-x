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

	// 게임 시작 화면 생성 (게임 시작 버튼).
	// replaceScene으로 게임 시작 화면에서 대기화면으로 넘어가기.
	// pushScene으로 1. 쿠키 이미지 변경. 2. 펫 이미지 변경. 3. 젤리 이미지 변경.
	// 4. 달리기 버튼. 5. 환경설정 버튼
	// 4. 달리기 버튼 눌렀을 시
	// 배경스크롤 나오면서 달리고 오른쪽 위 일시정지 버튼 생성
	// 일시정지 누르면 계속하기, 홈으로 돌아가기 두 개 버튼

	auto S1_StartButton = MenuItemSprite::
}