//
//  AminationScene.h
//  T4
//
//  Created by zhuoyikang on 15-3-16.
//
//

#ifndef __T4__BubbleScene__
#define __T4__BubbleScene__

#include <stdio.h>
#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include "CocosGUI.h"
#include "Bubble.hpp"


class BubbleScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();

    void update(float dt) override;

    void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *unused_event);

    // implement the "static create()" method manually
    CREATE_FUNC(BubbleScene);

private:
    Bubble *_bubble;
};


#endif /* defined(__T4__BubbleSceneScene__) */
