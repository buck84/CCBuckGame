/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_GAME_MANAGER_H__
#define __BK_GAME_MANAGER_H__

#include "2d\\CCScene.h"

class CBKLayerBase;
class CBKLayerGame;

/**
@brief    The Game instance
游戏整体逻辑，主要包含每个游戏逻辑之间切换，如登陆界面到游戏界面
派生自Scene因为cocos2dx在Director会调用Scene::onExit，重写onExit以便
*/
class CBKGame : public cocos2d::Scene
{
	enum
	{
		LAYER_LOGIN,
		LAYER_GAME,
		LAYER_NUM,
	};
public:
    CBKGame(void);
    ~CBKGame(void);

	bool init();
	bool run();

	//virtual void onEnter();
	//virtual void onExit();

	static CBKGame* getInstance();
    
protected:
	//void enterLayer(int layer);
    

protected:
   static CBKGame * sm_pGame;


   CBKLayerGame*	m_pLayerGame;

   CBKLayerBase*	m_pLayerRunning;
};


#endif // __BK_GAME_MANAGER_H__
