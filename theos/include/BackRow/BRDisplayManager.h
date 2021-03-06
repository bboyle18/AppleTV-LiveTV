/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BRSingleton.h"

@class CADisplayMode, CADisplay;

@interface BRDisplayManager : BRSingleton {
@private
	CADisplay *_display;	// 4 = 0x4
	CADisplayMode *_mostRecentMode;	// 8 = 0x8
}
+ (void)setSingleton:(id)singleton;	// 0x3158c32d
+ (id)singleton;	// 0x3158c1f9
- (id)init;	// 0x3158c205
- (void)_availableModesDidChange;	// 0x3166b049
- (BOOL)_currentModeIsValid;	// 0x3166ac4d
- (void)_displayModeDidChange;	// 0x3166b565
- (BOOL)_setCurrentMode:(id)mode;	// 0x3166af8d
- (void)_setDisplay:(id)display;	// 0x3166ac99
- (void)_setDisplayToDefaultMode;	// 0x3166b145
- (id)currentMode;	// 0x3166ad9d
- (void)dealloc;	// 0x3166af35
- (BOOL)displayModeSupported:(id)supported;	// 0x3166ad51
- (void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void *)context;	// 0x3166b421
- (BOOL)setCurrentMode:(id)mode;	// 0x3166b0e1
- (id)stringForDisplayMode:(id)displayMode;	// 0x3166adf9
- (id)supportedModes;	// 0x3166b2e9
- (id)uiStringForDisplayMode:(id)displayMode;	// 0x3166aea1
@end

