/* Copyright (c) 2009 Google Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

//
//  GDataAtomCategoryGroup.h
//

#if !GDATA_REQUIRE_SERVICE_INCLUDES || GDATA_INCLUDE_SERVICE_INTROSPECTION

#import "GDataObject.h"

// a collection in a service document for introspection,
// per http://tools.ietf.org/html/rfc5023#section-7.2
//
//  <categories fixed="yes">
//    <atom:category scheme="http://example.org/extra-cats/" term="joke" />
//    <atom:category scheme="http://example.org/extra-cats/" term="serious" />
//  </categories>
//
//  or
//
//  <categories href="http://example.com/cats/forMain.cats" />

@interface GDataAtomCategoryGroup : GDataObject <GDataExtension>

- (NSString *)href;
- (void)setHref:(NSString *)str;

- (NSString *)scheme;
- (void)setScheme:(NSString *)str;

- (BOOL)isFixed;
- (void)setIsFixed:(BOOL)flag;

- (NSArray *)categories; // array of GDataCategory objects
- (void)setCategories:(NSArray *)array;

@end

#endif // !GDATA_REQUIRE_SERVICE_INCLUDES || GDATA_INCLUDE_SERVICE_INTROSPECTION
