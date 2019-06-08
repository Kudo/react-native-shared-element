//
//  RNVisualCloneSource_h.h
//  react-native-visual-clone
//

#ifndef RNVisualCloneSource_h
#define RNVisualCloneSource_h

#import "RNVisualCloneDelegate.h"

@interface RNVisualCloneSource : NSObject

@property (nonatomic, readonly) NSNumber* reactTag;
@property (nonatomic, weak) UIView* view;
@property (nonatomic, readonly) UIView* snapshot;
@property (nonatomic, readonly) UIImage* image;
@property (nonatomic, readonly) CGSize size;
@property (nonatomic) long refCount;
@property (nonatomic) long hideRefCount;

- (instancetype)init:(NSNumber *)reactTag view:(UIView*) view;

- (void) requestSnapshotImage:(id <RNVisualCloneDelegate>) delegate useCache:(BOOL)useCache;
- (void) requestRawImage:(id <RNVisualCloneDelegate>) delegate useCache:(BOOL)useCache;
- (void) requestSnapshotView:(id <RNVisualCloneDelegate>) delegate useCache:(BOOL)useCache;
- (void) requestLayout:(id <RNVisualCloneDelegate>) delegate useCache:(BOOL)useCache;

// - (void) invalidate();


@end


#endif /* RNVisualCloneSource_h */