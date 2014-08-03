#include "BKGame.h"
#include "Scene\\BKSceneManager.h"
#include "UI\\BKUIManager.h"
#include "Layer\\BKLayerLogin.h"
#include "Layer\\BKLayerGame.h"

#include "cocos2d.h"

CBKGame * CBKGame::sm_pGame = 0;

CBKGame::CBKGame() :
m_pLayerRunning(NULL)
{

}

CBKGame::~CBKGame()
{
   
}

CBKGame* CBKGame::getInstance()
{
	if (!sm_pGame)
    {
        sm_pGame = new (std::nothrow) CBKGame();
        CCASSERT(sm_pGame, "FATAL: Not enough memory");
        sm_pGame->init();
    }
    assert(sm_pGame);
    return sm_pGame;
}

bool CBKGame::init()
{
	return true;
}

bool CBKGame::run()
{
	auto scene = cocos2d::Scene::create();
	auto director = cocos2d::Director::getInstance();
	m_pLayerRunning = CBKLayerGame::create();
	scene->addChild(m_pLayerRunning);
	director->runWithScene(scene);

	return true;
}

void CBKGame::enterLayer(int layer)
{
	switch(layer)
    {
        case LAYER_LOGIN: m_pLayerRunning = CBKLayerLogin::create(); break;
        case LAYER_GAME: m_pLayerRunning = CBKLayerGame::create(); break;
		default:
			return;
    }

	auto scene = cocos2d::Scene::create();
	scene->addChild(m_pLayerRunning);
	cocos2d::Director::getInstance()->replaceScene(scene);
}