//
//  GroupChatSegmentController.h
//  OneChainIOS
//
//  Created by lifei on 2018/5/16.
//  Copyright © 2018年 帶頭二哥 QQ:648959. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface GroupChatSegmentController : UIViewController

- (instancetype)initWithConversationChatter:(NSString *)conversationChatter
                           conversationType:(ONEConversationType)conversationType;
@end
