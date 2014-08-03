/****************************************************************************
Copyright (c) 2014-		Buck@126.com

****************************************************************************/

#ifndef __BK_SCENE_MANAGER_H__
#define __BK_SCENE_MANAGER_H__

#include "base/CCVector.h"

namespace cocos2d {
class Scene;
}

/**
@brief    管理游戏中从cocosstudio导出的场景，负责一组scene的资源加载
比如登陆界面包含一组scene，进入游戏可以把登陆界面scenemanager删掉加载游戏scenes
跟cocos2dx中的Scene没有任何关系，cocos2dx中Scene通常为空白，只是作为Layer或Node的容器



*/

class CBKSceneManager
{
public:
	enum
	{
		//SCENE_LOGIN,
		SCENE_GAME,
		SCENE_SCORE,
		SCENE_NUM,
	};
    CBKSceneManager(void);
    ~CBKSceneManager(void);

	bool init();

public:
	void changeScene(int type);

	void addSceneToLayer(cocos2d::Node* parent, int index=-1);
	cocos2d::Node*	getSceneRunning() { m_vecScenes.at(m_iSceneIndexRunning); }
    
protected:
    

protected:
	static CBKSceneManager * sm_pSceneManager;
   
	typedef cocos2d::Vector<cocos2d::Node*> SceneVector;
	SceneVector m_vecScenes;
	int			m_iSceneIndexRunning;
};


#endif // __BK_SCENE_MANAGER_H__
