//
//  PauseLayer.h
//  JokerJumper
//
//  Created by Sun on 3/31/13.
//  Copyright 2013 __MyCompanyName__. All rights reserved.
//



#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface PauseLayer : CCLayerColor <CCTargetedTouchDelegate> {
    CCMenuItemImage *resume;
    CCLabelTTF *labelResume;
    CCMenuItemImage *restart;
    CCLabelTTF *restartResume;
    CCMenuItemImage *main;
    CCLabelTTF *mainResume;
}

- (id) initWithLevel:(int)level;

@end
