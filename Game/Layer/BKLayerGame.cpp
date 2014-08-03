#include "BKLayerGame.h"
#include "BKPlayer.h"
#include "Scene/BKSceneManager.h"

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"

CBKLayerGame *CBKLayerGame::create()
{
	CBKLayerGame *ret = new CBKLayerGame();
    if (ret && ret->init())
    {
        ret->autorelease();
        return ret;
    }
    else
    {
        CC_SAFE_DELETE(ret);
        return nullptr;
    }
}

CBKLayerGame::CBKLayerGame()
{

}

CBKLayerGame::~CBKLayerGame()
{
   
}
bool CBKLayerGame::init()
{
	bool bRet = CBKLayerBase::init();
	//test code
	//testAnim();
	//testUI();
	//testScene();
	return bRet;
}

void CBKLayerGame::testAnim()
{
	m_pPlayer = CBKPlayer::create();
	this->addChild(m_pPlayer);
	m_pPlayer->setPosition(10, 10);

	m_pPlayer = CBKPlayer::create();
	this->addChild(m_pPlayer);
	m_pPlayer->setPosition(110, 110);
}

void CBKLayerGame::testUI()
{
}

void CBKLayerGame::testScene()
{
	m_pSceneManager->addSceneToLayer(this);
}