/***********************************************

该类是主菜单开始游戏选项下面的关卡选项页面，
主要功能包括音效管理、按钮管理、主菜单和英雄选择页面的跳转

***********************************************/

#pragma once
#include "cocos2d.h"

USING_NS_CC;

/* 关卡过渡场景（每两关之间显示第几关的）类 */
class LevelScene : public Layer
{
public:
	/*LevelScene();
	~LevelScene();*/
	CREATE_FUNC(LevelScene);
	virtual bool init();

private:
	void onExit() override;
	void onEnterTransitionDidFinish();
	void update(float dt);
	/* 更新显示的关卡id */
	void updateLevel();
	void setOption();
	Sprite *selectedRect;

	int _id;			// 关卡id ,-1为自定义
	bool isCanCustom;
	bool isCustom;
};
