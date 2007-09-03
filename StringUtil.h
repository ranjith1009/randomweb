//
//  StringUtil.h
//  RandomWeb
//
//  Created by g4b3 on Wed Sep 08 2004.
//  Copyright (c) 2004 Cellar Door Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface StringUtil : NSObject {

}

+(NSString*) trim:(NSString*)s;
+(NSString*) trim:(NSString*)s chars:(NSString*)c;
+(NSString*) removeFromString:(NSString*)source string:(NSString*)s;
+(NSString*) replaceInString:(NSString*)source string:(NSString*)s replace:(NSString*)r;
+(NSString*) lossyString:(NSString*)s;
+(NSString*) addURLEscapes:(NSString*)url;
+(NSString*) removeURLEscapes:(NSString*)url;
+(NSStringEncoding) getStringEncoding:(NSString*)ename;
+(BOOL) isEmptyString:(NSString*)s;
+(NSString*) decodeData:(NSData*)data encoding:(NSString*)encoding;

@end
