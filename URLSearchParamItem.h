//
//  URLSearchParamItem.h
//  RandomWeb
//
//  Created by Gabriel Handford on 4/13/05.
//  Copyright 2005 Gabriel Handford. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import "SearchParamItem.h"

@interface URLSearchParamItem : SearchParamItem {
	
	NSURL *url;
	NSDate *lastSearch;

}

-(id) init:(BOOL)enabled url:(NSString*)surl minSize:(NSSize)minSize;
-(id) initWithIdentifier:(int)identifier enabled:(BOOL)enabled url:(NSString*)surl minSize:(NSSize)minSize lastSearch:(NSDate*)s;

+(URLSearchParamItem*) load:(int)identifier dict:(NSDictionary*)dict;
-(NSURL*) getURL;

@end
