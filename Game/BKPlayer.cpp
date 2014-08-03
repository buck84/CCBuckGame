#include "BKPlayer.h"

#include "cocos2d.h"
#include "cocostudio\\CocoStudio.h"


CBKPlayer* CBKPlayer::create()
{
	CBKPlayer *ret = new CBKPlayer();
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

CBKPlayer::CBKPlayer()
{

}

CBKPlayer::~CBKPlayer()
{
   
}
bool CBKPlayer::init()
{
	cocos2d::Size visibleSize = cocos2d::Director::getInstance()->getVisibleSize();
    cocos2d::Vec2 origin = cocos2d::Director::getInstance()->getVisibleOrigin();

	cocostudio::ArmatureDataManager::getInstance()->addArmatureFileInfo("Hero0.png" , "Hero0.plist" , "Hero.ExportJson");
	cocostudio::Armature *armature = cocostudio::Armature::create( "Hero");
	armature->setPosition(cocos2d::ccp(visibleSize.width * 0.5, visibleSize.height * 0.5));
	armature->getAnimation()->playWithIndex(0);
	this->addChild(armature);
	return true;
}