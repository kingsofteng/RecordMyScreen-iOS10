/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "NSCoding.h"

@class MPMediaServerQuery, NSArray, MPMediaServerItem;

@interface MPMediaServerItemCollection : NSObject <NSCoding> {
@private
	MPMediaServerQuery* _itemsQuery;
	NSArray* _items;
	unsigned _itemsCount;
	MPMediaServerItem* _representativeItem;
	int _containedMediaTypes;
}
@property(readonly, assign, nonatomic) MPMediaServerQuery* itemsQuery;
-(instancetype)initWithItemsQuery:(id)itemsQuery itemsCount:(unsigned)count representativeItem:(id)item containedMediaTypes:(int)types;
-(instancetype)initWithItems:(id)items representativeItem:(id)item containedMediaTypes:(int)types;
-(void)dealloc;
-(nullable instancetype)initWithCoder:(NSCoder *)coder;
-(void)encodeWithCoder:(id)coder;
@end
