#include "BKSceneManager.h"

#include "cocos2d.h"
#include "cocostudio/cocostudio.h"

CBKSceneManager * CBKSceneManager::sm_pSceneManager = 0;

CBKSceneManager::CBKSceneManager()
{

}

CBKSceneManager::~CBKSceneManager()
{
 /*  	for(SceneVector::iterator it = m_vecScenes.begin(); it!=m_vecScenes.end(); ++it)
	{
		(*it)->release();
	}
*/	m_vecScenes.clear();   
}

bool CBKSceneManager::init()
{
	cocos2d::Node *pNode = cocostudio::SceneReader::getInstance()->createNodeWithSceneFile("publish/RPGGame.json");
	//cocos2d::Node *pNode = cocostudio::SceneReader::getInstance()->createNodeWithSceneFile("LoadSceneEdtiorFileTest/FishJoy2.json");
	/*
	Node *pNode = cocostudio::SceneReader::getInstance()->createNodeWithSceneFile("SceneEditorTest/SceneEditorTest.json"); 

	//Get a audio component by name
	cocostudio::ComAudio *pAudio = (cocostudio::ComAudio*)(pNode->getComponent("Audio")); 
	//paly audio
	pAudio->playBackgroundMusic(pAudio->getFile(), pAudio->isLoop()); 
	//Get a ComRender component by tag
	cocostudio::ComRender *pFishRender = (cocostudio::ComRender*)(pNode->getChildByTag(10010)->getComponent( "butterFlyFish")); 
	//convert to armature
	cocostudio::CCArmature *pButterFlyFish= (cocostudio::CCArmature *)(pFishRender->getNode()); 
	pButterFlyFish->getAnimation()->playByIndex(0); 
	*/
	//add the node to new scene
	m_vecScenes.pushBack(pNode);
	//pNode->release();

	m_iSceneIndexRunning = SCENE_GAME;
	return true;
}

void CBKSceneManager::changeScene(int type)
{
	m_iSceneIndexRunning = type;
}

void CBKSceneManager::addSceneToLayer(cocos2d::Node* parent, int index)
{
	if(index<0)
		index = m_iSceneIndexRunning;

	parent->addChild(m_vecScenes.at(m_iSceneIndexRunning));

}