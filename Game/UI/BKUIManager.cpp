#include "BKUIManager.h"

#include "cocos2d.h"
#include "cocostudio/cocostudio.h"

CBKUIManager::CBKUIManager()
{

}

CBKUIManager::~CBKUIManager()
{
/*	for(WidgetVector::iterator it = m_vecUIs.begin(); it!=m_vecUIs.end(); ++it)
	{
		(*it)->release();
	}
*/	m_vecUIs.clear();   
}

bool CBKUIManager::init(cocos2d::Node *parent)
{
	 cocos2d::ui::Widget* pWidget = cocostudio::GUIReader::getInstance()->widgetFromJsonFile("DemoMap.ExportJson");
	 m_vecUIs.pushBack(pWidget);
	 parent->addChild(pWidget);
     
	return true;
}
