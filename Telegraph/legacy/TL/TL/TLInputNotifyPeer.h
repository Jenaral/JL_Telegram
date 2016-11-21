#import <Foundation/Foundation.h>

#import "TLObject.h"
#import "TLMetaRpc.h"

@class TLInputPeer;
@class TLInputGeoChat;

@interface TLInputNotifyPeer : NSObject <TLObject>


@end

@interface TLInputNotifyPeer$inputNotifyPeer : TLInputNotifyPeer

@property (nonatomic, retain) TLInputPeer *peer;

@end

@interface TLInputNotifyPeer$inputNotifyUsers : TLInputNotifyPeer


@end

@interface TLInputNotifyPeer$inputNotifyChats : TLInputNotifyPeer


@end

@interface TLInputNotifyPeer$inputNotifyAll : TLInputNotifyPeer


@end

@interface TLInputNotifyPeer$inputNotifyGeoChatPeer : TLInputNotifyPeer

@property (nonatomic, retain) TLInputGeoChat *peer;

@end

