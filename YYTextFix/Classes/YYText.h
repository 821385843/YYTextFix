//
//  YYText.h
//  YYText <https://github.com/ibireme/YYText>
//
//  Created by ibireme on 15/2/25.
//  Copyright (c) 2015 ibireme.
//
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import <UIKit/UIKit.h>

#if __has_include(<YYTextFix/YYText.h>)
FOUNDATION_EXPORT double YYTextVersionNumber;
FOUNDATION_EXPORT const unsigned char YYTextVersionString[];
#import <YYTextFix/YYLabel.h>
#import <YYTextFix/YYTextView.h>
#import <YYTextFix/YYTextAttribute.h>
#import <YYTextFix/YYTextArchiver.h>
#import <YYTextFix/YYTextParser.h>
#import <YYTextFix/YYTextRunDelegate.h>
#import <YYTextFix/YYTextRubyAnnotation.h>
#import <YYTextFix/YYTextLayout.h>
#import <YYTextFix/YYTextLine.h>
#import <YYTextFix/YYTextInput.h>
#import <YYTextFix/YYTextDebugOption.h>
#import <YYTextFix/YYTextKeyboardManager.h>
#import <YYTextFix/YYTextUtilities.h>
#import <YYTextFix/NSAttributedString+YYText.h>
#import <YYTextFix/NSParagraphStyle+YYText.h>
#import <YYTextFix/UIPasteboard+YYText.h>
#else
#import "YYLabel.h"
#import "YYTextView.h"
#import "YYTextAttribute.h"
#import "YYTextArchiver.h"
#import "YYTextParser.h"
#import "YYTextRunDelegate.h"
#import "YYTextRubyAnnotation.h"
#import "YYTextLayout.h"
#import "YYTextLine.h"
#import "YYTextInput.h"
#import "YYTextDebugOption.h"
#import "YYTextKeyboardManager.h"
#import "YYTextUtilities.h"
#import "NSAttributedString+YYText.h"
#import "NSParagraphStyle+YYText.h"
#import "UIPasteboard+YYText.h"
#endif
