#include "BKLayerBase.h"
#include "BKPlayer.h"
#include "Scene/BKSceneManager.h"
#include "UI/BKUIManager.h"

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"

CBKLayerBase *CBKLayerBase::create()
{
	CBKLayerBase *ret = new CBKLayerBase();
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

CBKLayerBase::CBKLayerBase()
{

}

CBKLayerBase::~CBKLayerBase()
{
	//delete m_pSceneManager;
	//delete m_pUIManager;
   
}
bool CBKLayerBase::init()
{
/*	m_pSceneManager = new CBKSceneManager();
	if(!m_pSceneManager->init())
	{
		CCLOG("CBKLayerBase::init() m_pSceneManager init error\n");
		return false;
	}
	
	m_pUIManager = new CBKUIManager();
	if(!m_pUIManager->init(this))
	{
		CCLOG("CBKLayerBase::init() m_pUIManager init error\n");
		return false;
	}
	*/
	return true;
}
