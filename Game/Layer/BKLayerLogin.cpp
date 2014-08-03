#include "BKLayerLogin.h"
#include "BKPlayer.h"
#include "Scene/BKSceneManager.h"

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"

CBKLayerLogin *CBKLayerLogin::create()
{
	CBKLayerLogin *ret = new CBKLayerLogin();
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

CBKLayerLogin::CBKLayerLogin()
{

}

CBKLayerLogin::~CBKLayerLogin()
{
   
}
bool CBKLayerLogin::init()
{
	bool bRet = CBKLayerBase::init();
	//test code
	//testAnim();
	//testUI();
	//testScene();
	return bRet;
}

void CBKLayerLogin::testAnim()
{
	m_pPlayer = CBKPlayer::create();
	this->addChild(m_pPlayer);
	m_pPlayer->setPosition(10, 10);

	m_pPlayer = CBKPlayer::create();
	this->addChild(m_pPlayer);
	m_pPlayer->setPosition(110, 110);
}

void CBKLayerLogin::testUI()
{
}

void CBKLayerLogin::testScene()
{
	m_pSceneManager->addSceneToLayer(this);
}